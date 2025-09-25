// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Home_work6 : ModuleRules
{
	public Home_work6(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
