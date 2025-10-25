#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectChatterPlayType.generated.h"

UENUM(BlueprintType)
enum class EStatusEffectChatterPlayType : uint8 {
    PlayOnAdded,
    PlayOnStart,
    PlayOnApply,
    PlayOnInterval,
};

