#pragma once
#include "CoreMinimal.h"
#include "LogicalGroupedExpression.h"
#include "EncounterActivationConditions.generated.h"

USTRUCT(BlueprintType)
struct FEncounterActivationConditions {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLogicalGroupedExpression ValidConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationChance;
    
public:
    ARKANSAS_API FEncounterActivationConditions();
};

