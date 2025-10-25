#pragma once
#include "CoreMinimal.h"
#include "AISettings_MeleeAttackPatternEntry.generated.h"

class UAISetting_MeleeAction;

USTRUCT(BlueprintType)
struct FAISettings_MeleeAttackPatternEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAISetting_MeleeAction* MeleeAction;
    
public:
    ARKANSAS_API FAISettings_MeleeAttackPatternEntry();
};

