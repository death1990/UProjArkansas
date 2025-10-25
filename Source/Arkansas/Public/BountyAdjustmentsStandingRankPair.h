#pragma once
#include "CoreMinimal.h"
#include "EBountyAdjustment.h"
#include "EStandingAdjustment.h"
#include "BountyAdjustmentsStandingRankPair.generated.h"

USTRUCT(BlueprintType)
struct FBountyAdjustmentsStandingRankPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBountyAdjustment BountyAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStandingAdjustment StandingAdjustment;
    
    ARKANSAS_API FBountyAdjustmentsStandingRankPair();
};

