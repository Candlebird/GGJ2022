// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GGJ2022Game : ModuleRules
{
	public GGJ2022Game(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
