#pragma once
#include "CoreMinimal.h"
#include "EIKGoalTarget.h"
#include "FxEventEntry.h"
#include "PropAnimationData.h"
#include "PropAnimationPlayer.generated.h"

class UAnimationProxyData;

USTRUCT(BlueprintType)
struct OEIANIMPROXYRUNTIME_API FPropAnimationPlayer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIKGoalTarget, FPropAnimationData> NewIKTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPropAnimationData> PropAnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimationProxyData* AnimationProxyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ActivePositionalDataIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFxEventEntry> Events;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropAnimationData PropAnimationData1;
    
public:
    FPropAnimationPlayer();
};

