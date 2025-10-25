#pragma once
#include "CoreMinimal.h"
#include "BountyAdjustmentsStandingRankPair.h"
#include "ESkillDifficultyRange.h"
#include "BountyAdjustmentsForOclDifficulty.generated.h"

USTRUCT(BlueprintType)
struct FBountyAdjustmentsForOclDifficulty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESkillDifficultyRange, FBountyAdjustmentsStandingRankPair> BountyAdjustmentsMap;
    
    ARKANSAS_API FBountyAdjustmentsForOclDifficulty();
};

