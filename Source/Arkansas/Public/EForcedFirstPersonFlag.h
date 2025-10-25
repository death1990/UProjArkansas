#pragma once
#include "CoreMinimal.h"
#include "EForcedFirstPersonFlag.generated.h"

UENUM(BlueprintType)
enum class EForcedFirstPersonFlag : uint8 {
    Invalid,
    FineAim,
    Whiskers,
    Ladders = 4,
    Conversation = 8,
    CrouchTunnel = 16,
    EventEffect = 32,
    Animation = 64,
    Drowning = 128,
};

