// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class OrionUI : ModuleRules
{
	public OrionUI(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Core",
				"CommonUI",
				"DeveloperSettings"
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				
				"Slate",
				"SlateCore",
				"UMG",
			}
			);
	}
}
