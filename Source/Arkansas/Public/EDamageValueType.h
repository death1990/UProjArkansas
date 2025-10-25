#pragma once
#include "CoreMinimal.h"
#include "EDamageValueType.generated.h"

UENUM(BlueprintType)
enum class EDamageValueType : uint8 {
    Value,
    Percent,
};

