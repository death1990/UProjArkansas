#pragma once
#include "CoreMinimal.h"
#include "TrackedDecision.h"
#include "TrackedDecisionSet.generated.h"

USTRUCT(BlueprintType)
struct FTrackedDecisionSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTrackedDecision> TrackedDecisions;
    
    ARKANSAS_API FTrackedDecisionSet();
};

