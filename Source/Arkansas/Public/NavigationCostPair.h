#pragma once
#include "CoreMinimal.h"
#include "NavigationCost.h"
#include "NavigationCostPair.generated.h"

USTRUCT(BlueprintType)
struct FNavigationCostPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavigationCost AllowedCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDisallowedCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavigationCost DisallowedCost;
    
    ARKANSAS_API FNavigationCostPair();
};

