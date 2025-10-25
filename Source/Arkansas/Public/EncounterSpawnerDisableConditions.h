#pragma once
#include "CoreMinimal.h"
#include "LogicalGroupedExpression.h"
#include "EncounterSpawnerDisableConditions.generated.h"

USTRUCT(BlueprintType)
struct FEncounterSpawnerDisableConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLogicalGroupedExpression DisableConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisabled;
    
    ARKANSAS_API FEncounterSpawnerDisableConditions();
};

