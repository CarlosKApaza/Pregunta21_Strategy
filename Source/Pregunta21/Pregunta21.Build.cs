// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Pregunta21 : ModuleRules
{
	public Pregunta21(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
