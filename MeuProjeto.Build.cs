// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MeuProjeto : ModuleRules
{
	public MeuProjeto(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
