#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ClipCheckProfile.h"
#include "ConditionalBlockedPose.h"
#include "WeaponClippingCheckConfig.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UWeaponClippingCheckConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConditionalBlockedPose> BlockedPoseConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockedPoseBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClipCheckProfile> Profiles;
    
    UWeaponClippingCheckConfig();

};

