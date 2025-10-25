#pragma once
#include "CoreMinimal.h"
#include "EArithmeticOperation.generated.h"

UENUM(BlueprintType)
enum class EArithmeticOperation : uint8 {
    Add,
    Subtract,
    Multiply,
    Divide,
};

