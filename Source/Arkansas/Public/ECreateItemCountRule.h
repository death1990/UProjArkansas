#pragma once
#include "CoreMinimal.h"
#include "ECreateItemCountRule.generated.h"

UENUM(BlueprintType)
enum class ECreateItemCountRule : uint8 {
    UseItemDefinitionCount,
    UseFormulaTier1Count,
    UseFormulaTier2Count,
    UseFormulaTier3Count,
};

