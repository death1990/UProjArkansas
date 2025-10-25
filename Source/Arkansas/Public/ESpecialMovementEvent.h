#pragma once
#include "CoreMinimal.h"
#include "ESpecialMovementEvent.generated.h"

UENUM(BlueprintType)
enum class ESpecialMovementEvent : uint8 {
    None,
    Crouch,
    Uncrouch,
    Jump,
    Land,
    Dodge,
};

