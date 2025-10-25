#pragma once
#include "CoreMinimal.h"
#include "EHealingState.generated.h"

UENUM(BlueprintType)
enum class EHealingState : uint8 {
    Inhaler,
    Food,
    None,
};

