#pragma once
#include "CoreMinimal.h"
#include "ECoreFaceEmotion.generated.h"

UENUM(BlueprintType)
enum class ECoreFaceEmotion : uint8 {
    DoNotChange,
    Fear = 27,
    Angry = 1,
    Disgust = 28,
    Flirtatious = 17,
    Happy = 8,
    Sad = 11,
    Shock,
    Neutral = 9,
    Annoyed = 2,
    Anxious,
    Awkward,
    Despair = 6,
    Proud = 10,
    Skeptical = 13,
    SlightlyAngry,
    SlightlyHappy,
    Livid = 20,
    SlightlyAnnoyed,
    Smolder = 30,
    Confused,
    Smug,
    Grimace,
    Smirk = 16,
    DoNotUse = DoNotChange,
};

