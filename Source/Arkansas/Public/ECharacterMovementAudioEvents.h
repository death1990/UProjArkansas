#pragma once
#include "CoreMinimal.h"
#include "ECharacterMovementAudioEvents.generated.h"

UENUM(BlueprintType)
enum class ECharacterMovementAudioEvents : uint8 {
    None,
    Crouch,
    CrouchStanding,
    Uncrouch,
    UncrouchStanding,
    Jump,
    DodgeLeft,
    DodgeBack,
    DodgeRight,
    DodgeForward,
    Land,
    StartClimbing,
    StopClimbing,
    Count,
};

