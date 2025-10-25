using UnrealBuildTool;

public class OEICharacterCustomization : ModuleRules {
    public OEICharacterCustomization(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AnimGraphRuntime",
            "Core",
            "CoreUObject",
            "Engine",
            "OEIMultiSkeletalMesh",
            "OEIText",
        });
    }
}
