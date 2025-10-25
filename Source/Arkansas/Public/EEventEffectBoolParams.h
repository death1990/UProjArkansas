#pragma once
#include "CoreMinimal.h"
#include "EEventEffectBoolParams.generated.h"

UENUM(BlueprintType)
enum class EEventEffectBoolParams : uint8 {
    StartedFromFineAimIn,
    StartedFromFineAimOut,
    PlayInReverse,
    PlayNormalRate,
    LastShot,
    UseP1P,
    Count,
    Invalid,
};

