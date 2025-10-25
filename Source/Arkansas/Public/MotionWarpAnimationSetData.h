#pragma once
#include "CoreMinimal.h"
#include "MotionWarpAnimationSetEntry.h"
#include "MotionWarpAnimationSetData.generated.h"

USTRUCT(BlueprintType)
struct FMotionWarpAnimationSetData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMotionWarpAnimationSetEntry> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoScaleRange;
    
public:
    ARKANSAS_API FMotionWarpAnimationSetData();
};

