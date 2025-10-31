// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class ArkansasEditorTarget : TargetRules
{
	public ArkansasEditorTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_4;
		
		// Editor-specific optimizations
		bUseUnityBuild = true;
		bUsePCHFiles = true;
		bUseSharedPCHs = true;
		bUseFastPDB = true;
		bBuildDeveloperTools = true;
		
		// Enable hot reload for faster iteration
		bSupportEditAndContinue = true;
		bUseIncrementalLinking = true;
		
		// Optimize editor compilation
		bUseFastMonoCalls = true;
		bUseAdaptiveUnityBuild = true;
		
		ExtraModuleNames.Add("Arkansas");
	}
}
