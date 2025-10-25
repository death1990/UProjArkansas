#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "MotionWarpAnimationSetData.h"
#include "MotionWarpAnimationSet.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UMotionWarpAnimationSet : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMotionWarpAnimationSetData Data;
    
public:
    UMotionWarpAnimationSet();

};

