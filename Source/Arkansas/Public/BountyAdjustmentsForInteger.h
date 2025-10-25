#pragma once
#include "CoreMinimal.h"
#include "BountyAdjustmentsStandingRankPair.h"
#include "BountyAdjustmentsForInteger.generated.h"

USTRUCT(BlueprintType)
struct FBountyAdjustmentsForInteger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FBountyAdjustmentsStandingRankPair> BountyAdjustmentsMap;
    
    ARKANSAS_API FBountyAdjustmentsForInteger();
};

