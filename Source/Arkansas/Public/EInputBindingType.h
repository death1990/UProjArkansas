#pragma once
#include "CoreMinimal.h"
#include "EInputBindingType.generated.h"

UENUM(BlueprintType)
enum class EInputBindingType : uint8 {
    Press,
    PressAndRelease,
    ReleaseNotHeld,
    ReleaseNoConsume,
    Release,
    HoldPoint25,
    HoldPoint35,
    HoldPoint5,
    Hold1,
    Hold1Point5,
    Axis,
    Linked,
    ReleaseOnHeldPoint25,
    ReleaseOnHeldPoint35,
    ReleaseOnHeldPoint5,
    ReleaseOnHeld1,
    ReleaseOnHeld1Point5,
    Invalid,
};

