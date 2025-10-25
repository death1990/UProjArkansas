using UnrealBuildTool;

public class OEIPhotoMode : ModuleRules {
    public OEIPhotoMode(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "Engine",
            "OEIText",
            "SlateCore",
            "UMG",
        });
    }
}
