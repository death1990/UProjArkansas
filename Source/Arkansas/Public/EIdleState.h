#pragma once
#include "CoreMinimal.h"
#include "EIdleState.generated.h"

UENUM(BlueprintType)
enum class EIdleState : uint8 {
    CrouchingFineAim,
    CrouchingCombat,
    CrouchingNoncombat,
    StandingFineAim,
    StandingCombat,
    StandingNoncombat,
};

