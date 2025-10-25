using UnrealBuildTool;

public class OEICinematics : ModuleRules {
    public OEICinematics(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "LevelSequence",
            "MovieScene",
            "OEIAnimProxyRuntime",
            "OEICommon",
            "OEIFlowCharts",
            //"PrefabricatorRuntime",
        });
    }
}
