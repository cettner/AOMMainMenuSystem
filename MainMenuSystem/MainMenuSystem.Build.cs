// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class MainMenuSystem : ModuleRules
{
	public MainMenuSystem(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { 
			"Core", 
			"Engine", 
			"CoreUObject",
            "UMG",
			"MenuUICore"
		});

		PrivateDependencyModuleNames.AddRange(new string[] {  });
	}
}
