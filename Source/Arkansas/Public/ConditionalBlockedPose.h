#pragma once
#include "CoreMinimal.h"
#include "BlockedPose.h"
#include "ConditionalBlockedPose.generated.h"

class UCharacterCondition;

USTRUCT(BlueprintType)
struct FConditionalBlockedPose {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterCondition* Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlockedPose Pose;
    
    ARKANSAS_API FConditionalBlockedPose();
};

