#pragma once
#include "CoreMinimal.h"
#include "LogicalGroupedExpression.h"
#include "EncounterClearConditions.generated.h"

USTRUCT(BlueprintType)
struct FEncounterClearConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLogicalGroupedExpression ClearConditions;
    
    ARKANSAS_API FEncounterClearConditions();
};

