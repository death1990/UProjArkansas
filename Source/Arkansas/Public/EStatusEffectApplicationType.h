#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectApplicationType.generated.h"

UENUM(BlueprintType)
enum class EStatusEffectApplicationType : uint8 {
    ApplyOnStart,
    ApplyOnTick,
    ApplyOverTime,
    ApplyAtEnd,
};

