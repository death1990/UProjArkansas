#pragma once
#include "CoreMinimal.h"
#include "EInteractionRestrictions.generated.h"

UENUM()
enum class EInteractionRestrictions : uint32 {
    None,
    Falling,
    LookAtTrigger,
    InteractableNotVisible,
};

