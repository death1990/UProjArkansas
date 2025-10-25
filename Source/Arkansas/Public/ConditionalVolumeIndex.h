#pragma once
#include "CoreMinimal.h"
#include "ConditionalVolumeIndex.generated.h"

class AOWCrowdVolume;

USTRUCT(BlueprintType)
struct FConditionalVolumeIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AOWCrowdVolume> Volume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConditionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EnabledWithCondition;
    
    ARKANSAS_API FConditionalVolumeIndex();
};

