#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "AnimationProxyDeveloperSettings.generated.h"

class UMaterialInterface;
class USkeletalMesh;
class USkeleton;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class OEIANIMPROXYRUNTIME_API UAnimationProxyDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<USkeleton>, TSoftObjectPtr<USkeletalMesh>> SkeletonMeshMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> PreviewMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> InvalidPreviewMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> RequireBuildMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float AutoFaceControlRotationLength;
    
public:
    UAnimationProxyDeveloperSettings();

};

