#pragma once
#include "CoreMinimal.h"
#include "DecisionOption.h"
#include "TrackedDecision.generated.h"

USTRUCT(BlueprintType)
struct FTrackedDecision {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DecisionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDecisionOption> Options;
    
    ARKANSAS_API FTrackedDecision();
};

