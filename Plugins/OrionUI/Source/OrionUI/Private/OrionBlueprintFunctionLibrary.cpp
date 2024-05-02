#include "OrionBlueprintFunctionLibrary.h"
#include <Engine/AssetManager.h>
#include "Blueprint/SlateBlueprintLibrary.h"
#include "UI/Widgets/OrionMenuWidget.h"
#include "UI/OrionHUD.h"
#include "StereoRendering.h"
#include "UI/Widgets/OrionCascadingTooltipSystem.h"

TMap<FName, class TSubclassOf<UOrionMenuWidget>> UOrionBlueprintFunctionLibrary::GetMenuWidgets(
	UObject* WorldContextObject)
{
	TMap<FName, class TSubclassOf<UOrionMenuWidget>> MenuWidgets;
	const auto& AssetManager = UAssetManager::Get();
	TArray<FAssetData> MenuWidgetsList;
	AssetManager.GetPrimaryAssetDataList(TEXT("MenuWidgets"), MenuWidgetsList);
	for (const FAssetData& Asset : MenuWidgetsList)
	{
		FString Path = Asset.PackagePath.ToString() + "/" + Asset.AssetName.ToString() + "." + Asset.AssetName.
			ToString() + "_C";
		FSoftClassPath MyWidgetClassRef(Path);
		if (const auto MyWidgetClass = MyWidgetClassRef.TryLoadClass<UOrionMenuWidget>())
		{
			if (const auto Widget = CreateWidget<UOrionMenuWidget>(WorldContextObject->GetWorld(), MyWidgetClass))
			{
				MenuWidgets.Add(Widget->OrionMenuId.IsNone() ? Asset.AssetName : Widget->OrionMenuId, MyWidgetClass);
			}
		}
	}
	return MenuWidgets;
}

UUserWidget* UOrionBlueprintFunctionLibrary::CreateUserWidget(const UObject* WorldContextObject,
                                                              TSubclassOf<UUserWidget> PoolWidget)
{
	if (const auto HUD = Cast<AOrionHUD>(WorldContextObject->GetWorld()->GetFirstPlayerController()->GetHUD()))
	{
		return HUD->GetUserWidgetPool().GetOrCreateInstance(PoolWidget);
	}
	return nullptr;
}

void UOrionBlueprintFunctionLibrary::DisplayScreen(UObject* WorldContextObject, FName MenuId)
{
	if (const auto HUD = Cast<AOrionHUD>(WorldContextObject->GetWorld()->GetFirstPlayerController()->GetHUD()))
	{
		HUD->DisplayScreen(MenuId);
	}
}

UOrionMenuWidget* UOrionBlueprintFunctionLibrary::HideScreen(UObject* WorldContextObject,
                                                             class UOrionMenuWidget* MenuWidget)
{
	if (const auto HUD = Cast<AOrionHUD>(WorldContextObject->GetWorld()->GetFirstPlayerController()->GetHUD()))
	{
		return HUD->HideScreen(MenuWidget);
	}
	return nullptr;
}

void UOrionBlueprintFunctionLibrary::ClearScreen(UObject* WorldContextObject)
{
	if (const auto HUD = Cast<AOrionHUD>(WorldContextObject->GetWorld()->GetFirstPlayerController()->GetHUD()))
	{
		HUD->ClearScreen();
	}
}

UOrionUIControllerBase* UOrionBlueprintFunctionLibrary::GetUIController(UObject* WorldContextObject,
                                                                        TSubclassOf<UOrionUIControllerBase>
                                                                        UIControllerClass)
{
	if (const auto HUD = Cast<AOrionHUD>(WorldContextObject->GetWorld()->GetFirstPlayerController()->GetHUD()))
	{
		return HUD->GetUIController(UIControllerClass);
	}
	return nullptr;
}

bool ProjectWorldToScreen(const FVector& WorldPosition, const FIntRect& ViewRect, const FMatrix& ViewProjectionMatrix, FVector2D& out_ScreenPos)
{
	FPlane Result = ViewProjectionMatrix.TransformFVector4(FVector4(WorldPosition, 1.f));

	bool bBehindCamera = Result.W < 0;
	if (bBehindCamera)
	{
		Result.W = FMath::Abs(Result.W);
	}

	// the result of this will be x and y coords in -1..1 projection space
	const float RHW = 1.0f / Result.W;
	FPlane PosInScreenSpace = FPlane(Result.X * RHW, Result.Y * RHW, Result.Z * RHW, Result.W);

	// Move from projection space to normalized 0..1 UI space
	const float NormalizedX = (PosInScreenSpace.X / 2.f) + 0.5f;
	const float NormalizedY = 1.f - (PosInScreenSpace.Y / 2.f) - 0.5f;
	FVector2D NormalizedPos = FVector2D(NormalizedX, NormalizedY);

	if (bBehindCamera && NormalizedPos.X < 1.0f && NormalizedPos.Y < 1.0f)
	{
		NormalizedPos.Normalize();
		if (NormalizedPos.Y >= NormalizedPos.X)
			NormalizedPos *= 1.0f / NormalizedPos.Y;
		else
			NormalizedPos *= 1.0f / NormalizedPos.X;
	}

	FVector2D RayStartViewRectSpace(
		(NormalizedPos.X * (float)ViewRect.Width()),
		(NormalizedPos.Y * (float)ViewRect.Height())
	);

	out_ScreenPos = RayStartViewRectSpace + FVector2D(static_cast<float>(ViewRect.Min.X), static_cast<float>(ViewRect.Min.Y));

	return true;
}

bool ProjectWorldLocationToScreen(APlayerController* PlayerController, FVector WorldLocation, FVector& ScreenLocation, bool bPlayerViewportRelative)
{
	// find distance
	ULocalPlayer const* const LP = PlayerController->GetLocalPlayer();
	if (LP && LP->ViewportClient)
	{
		// get the projection data
		FSceneViewProjectionData ProjectionData;
		if (LP->GetProjectionData(LP->ViewportClient->Viewport, ProjectionData, (int32)EStereoscopicPass::eSSP_FULL))
		{
			FVector2D ScreenPosition2D;
			FMatrix const ViewProjectionMatrix = ProjectionData.ComputeViewProjectionMatrix();
			if (ProjectWorldToScreen(WorldLocation, ProjectionData.GetConstrainedViewRect(), ViewProjectionMatrix, ScreenPosition2D))
			{
				if (bPlayerViewportRelative)
				{
					ScreenPosition2D -= FVector2D(ProjectionData.GetConstrainedViewRect().Min);
				}

				ScreenLocation = FVector(ScreenPosition2D.X, ScreenPosition2D.Y, FVector::Dist(ProjectionData.ViewOrigin, WorldLocation));
				PlayerController->PostProcessWorldToScreen(WorldLocation, ScreenPosition2D, bPlayerViewportRelative);

				return true;
			}
		}
	}

	return false;
}

bool ProjectWorldLocationToWidgetPosition(APlayerController* PlayerController, FVector WorldLocation, FVector& ViewportPosition, bool bPlayerViewportRelative)
{
	if (PlayerController)
	{
		FVector PixelLocation;
		const bool bProjected = ProjectWorldLocationToScreen(PlayerController, WorldLocation, PixelLocation, bPlayerViewportRelative);

		if (bProjected)
		{
			// Round the pixel projected value to reduce jittering due to layout rounding,
			// I do this before I remove scaling, because scaling is going to be applied later
			// in the opposite direction, so as long as we round, before inverse scale, scale should
			// result in more or less the same value, especially after slate does layout rounding.
			FVector2D ScreenPosition(FMath::RoundToInt(PixelLocation.X), FMath::RoundToInt(PixelLocation.Y));

			FVector2D ViewportPosition2D;
			USlateBlueprintLibrary::ScreenToViewport(PlayerController, ScreenPosition, ViewportPosition2D);
			ViewportPosition.X = ViewportPosition2D.X;
			ViewportPosition.Y = ViewportPosition2D.Y;
			ViewportPosition.Z = PixelLocation.Z;

			return true;
		}
	}

	ViewportPosition = FVector::ZeroVector;

	return false;
}

bool UOrionBlueprintFunctionLibrary::BetterProjectWorldLocationToWidgetPosition(APlayerController* PlayerController, FVector WorldLocation, FVector2D& ViewportPosition, bool bPlayerViewportRelative)
{
	FVector ScreenPosition3D;
	const bool bSuccess = ProjectWorldLocationToWidgetPosition(PlayerController, WorldLocation, ScreenPosition3D, bPlayerViewportRelative);
	ViewportPosition = FVector2D(ScreenPosition3D.X, ScreenPosition3D.Y);
	return bSuccess;
}

UOrionTooltipWidget* UOrionBlueprintFunctionLibrary::CreateToolTipWidget(UObject* WorldContextObject, TSubclassOf<UOrionTooltipWidget> TooltipWidgetClass)
{
	if (const auto HUD = Cast<AOrionHUD>(WorldContextObject->GetWorld()->GetFirstPlayerController()->GetHUD()))
	{
		return HUD->GetCascadingTooltipSystem()->CreateTooltip(TooltipWidgetClass);
	}
	return nullptr;
}
