#pragma once
#include "CoreMinimal.h"
#include "EHolsterRequestType.generated.h"

UENUM(BlueprintType)
enum class EHolsterRequestType : uint8 {
    Normal,
    Instant,
    NormalNoAudio,
    Quick,
    WeaponDown,
    Conversation,
    NormalUnscaled,
};

