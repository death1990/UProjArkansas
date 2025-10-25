#pragma once
#include "CoreMinimal.h"
#include "DefensiveActionProbability.h"
#include "ReactiveToRangeDefensiveActionProbability.generated.h"

USTRUCT(BlueprintType)
struct FReactiveToRangeDefensiveActionProbability : public FDefensiveActionProbability {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoverWeight;
    
public:
    ARKANSAS_API FReactiveToRangeDefensiveActionProbability();
};

