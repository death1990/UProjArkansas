#pragma once
#include "CoreMinimal.h"
#include "MotionKey.h"
#include "AnimationMotionData.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FAnimationMotionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* AnimSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMotionKey> MotionKeys;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MemorySize;
    
    ARKANSAS_API FAnimationMotionData();
};

