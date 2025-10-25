#pragma once
#include "CoreMinimal.h"
#include "ENiagaraSystemParamType.generated.h"

UENUM(BlueprintType)
enum class ENiagaraSystemParamType : uint8 {
    Integer,
    Float,
    Vector,
    Object,
    LinearColor,
    Boolean,
};

