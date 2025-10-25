#pragma once
#include "CoreMinimal.h"
#include "ESpellEffectDirectionType.generated.h"

UENUM(BlueprintType)
enum class ESpellEffectDirectionType : uint8 {
    Default,
    CasterToTarget,
    CasterForward,
    TargetForward,
};

