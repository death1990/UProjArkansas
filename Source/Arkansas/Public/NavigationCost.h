#pragma once
#include "CoreMinimal.h"
#include "NavigationCost.generated.h"

USTRUCT(BlueprintType)
struct FNavigationCost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraveledDistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalDistanceCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutOfCombatAdditionalDistanceCostMultiplierOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOutOfCombatAdditionalDistanceCostMultiplierOverride;
    
    ARKANSAS_API FNavigationCost();
};

