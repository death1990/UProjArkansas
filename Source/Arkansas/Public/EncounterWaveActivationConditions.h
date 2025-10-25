#pragma once
#include "CoreMinimal.h"
#include "LogicalGroupedExpression.h"
#include "EncounterWaveActivationConditions.generated.h"

USTRUCT(BlueprintType)
struct FEncounterWaveActivationConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLogicalGroupedExpression ValidConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationDelay;
    
    ARKANSAS_API FEncounterWaveActivationConditions();
};

