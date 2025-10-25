#pragma once
#include "CoreMinimal.h"
#include "EAbilityEventType.generated.h"

UENUM(BlueprintType)
enum class EAbilityEventType : uint8 {
    Instant,
    StartContinuous,
    EndContinuous,
};

