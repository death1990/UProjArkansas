// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class ArkansasTarget : TargetRules
{
	public ArkansasTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_4;
		
		// Performance optimizations
		bUseUnityBuild = true;
		bUsePCHFiles = true;
		bUseSharedPCHs = true;
		bUseFastPDB = true;
		
		// Shipping optimizations
		if (Configuration == UnrealTargetConfiguration.Shipping)
		{
			bUseChecksInShipping = false;
			bUseLoggingInShipping = false;
			bUseMallocProfiler = false;
			bOmitPCDebugInfoInDevelopment = true;
		}
		
		// Platform-specific settings
		if (Platform == UnrealTargetPlatform.Win64)
		{
			WindowsPlatform.bStrictConformanceMode = true;
			WindowsPlatform.Compiler = WindowsCompiler.VisualStudio2022;
		}
		
		ExtraModuleNames.Add("Arkansas");
	}
}
