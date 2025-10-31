using UnrealBuildTool;

public class Arkansas : ModuleRules {
    public Arkansas(ReadOnlyTargetRules Target) : base(Target) {
        // Optimization: Use shared PCH for faster compilation
        PCHUsage = PCHUsageMode.UseSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        // Performance optimizations
        bUseUnity = true;
        MinFilesUsingPrecompiledHeaderOverride = 1;
        bFasterWithoutUnity = false;
        
        // Enable optimizations for shipping builds
        if (Target.Configuration == UnrealTargetConfiguration.Shipping)
        {
            bUseAVX = true;
            OptimizeCode = CodeOptimization.Speed;
        }
        
        // Reduce compile times
        bUsePrecompiled = true;
        bPrecompile = true;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AkAudio",
            "AnimGraphRuntime",
            "BinkMediaPlayer",
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            //"GameTelemetry",
            "GameplayCameras",
            "GameplayTags",
            "GameplayTasks",
            "Gauntlet",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "Niagara",
            "NiagaraAnimNotifies",
            "OEIAimAssist",
            "OEIAnimProxyRuntime",
            "OEIAnimationRuntime",
            "OEICharacterCustomization",
            "OEICinematics",
            "OEICommon",
            "OEICrowdManagerRuntime",
            "OEIFlowCharts",
            "OEIGlobalVariables",
            "OEIMultiSkeletalMesh",
            "OEIMusic",
            "OEIPlatformService",
            "OEIScripting",
            "OEISettings",
            "OEIText",
            "OEITickManager",
            "OEIVoiceOver",
            "OEIWeatherSystemRuntime",
            "OEIWorldScriptActor",
            "OEIWwise",
            "PhysicsCore",
            //"PrefabricatorRuntime",
            "Slate",
            "SlateCore",
            "TemplateSequence",
            "UMG",
            "Launch",
        });

        // Enable private dependencies for better performance
        PrivateDependencyModuleNames.AddRange(new string[] {
            "Chaos",
            "GeometryProcessing", 
            "GeometryAlgorithms",
            "DynamicMesh",
            "RHI",
            "RenderCore",
            "ApplicationCore",
            "Json",
            "HTTP",
        });
        
        // Platform-specific optimizations
        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            PublicDefinitions.Add("PLATFORM_WINDOWS=1");
            bEnableExceptions = false; // Disable exceptions for performance
        }
        
        // Optimize include paths
        PublicIncludePaths.AddRange(new string[] {
            "Arkansas/Public"
        });
        
        PrivateIncludePaths.AddRange(new string[] {
            "Arkansas/Private"
        });

    }
}
