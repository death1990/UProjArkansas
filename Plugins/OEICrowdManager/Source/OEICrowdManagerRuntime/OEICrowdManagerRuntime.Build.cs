using UnrealBuildTool;

public class OEICrowdManagerRuntime : ModuleRules {
    public OEICrowdManagerRuntime(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "Arkansas",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "OEIAnimProxyRuntime",
            "ZoneGraph",
        });
    }
}
