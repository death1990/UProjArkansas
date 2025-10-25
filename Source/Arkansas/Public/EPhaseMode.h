#pragma once
#include "CoreMinimal.h"
#include "EPhaseMode.generated.h"

UENUM(BlueprintType)
enum class EPhaseMode : uint8 {
    None,
    Partial,
    Full,
};

