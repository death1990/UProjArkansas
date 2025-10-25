#pragma once
#include "CoreMinimal.h"
#include "EEventEffectFloatParams.generated.h"

UENUM(BlueprintType)
enum class EEventEffectFloatParams : uint8 {
    Duration,
    Size,
    Scalar,
    NormalizedStartTime,
    SkipAnimations,
    SkipAudio,
    MissingAmmo,
    CurrentAmmoPoolSize,
    AmmoShotCount,
    RampedShotIndex,
    FiringMode,
    EventType,
    BurstIndex,
    BurstCount,
    StartTime,
    OverrideBlendIn,
    Custom,
    Count,
    Invalid,
};

