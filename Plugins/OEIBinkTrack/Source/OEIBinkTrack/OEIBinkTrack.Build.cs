using UnrealBuildTool;

public class OEIBinkTrack : ModuleRules {
    public OEIBinkTrack(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "BinkMediaPlayer",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "MovieScene",
        });
    }
}
