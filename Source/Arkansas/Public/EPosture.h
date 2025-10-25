#pragma once
#include "CoreMinimal.h"
#include "EPosture.generated.h"

UENUM(BlueprintType)
enum class EPosture : uint8 {
    Conspiratorial = 5,
    Drunk = 7,
    DrunkBar = 26,
    Thinking = 18,
    Neutral = 9,
    Angry = 36,
    Relaxed,
    ReadDocument,
    DoNotUse = 0,
};

