// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Orion : ModuleRules
{
	public Orion(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] {
	        "Core", 
	        "CoreUObject", 
	        "Engine", 
	        "InputCore", 
	        "HeadMountedDisplay", 
	        "NavigationSystem", 
	        "AIModule", 
	        "Niagara",
	        "EnhancedInput", 
	        "OrionUI",
        });
        
        PrivateDependencyModuleNames.AddRange(new string[] {
	        "Slate",
	        "SlateCore",
	        "UMG",
        });
    }
}
