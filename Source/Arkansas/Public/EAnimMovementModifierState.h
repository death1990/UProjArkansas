#pragma once
#include "CoreMinimal.h"
#include "EAnimMovementModifierState.generated.h"

UENUM(BlueprintType)
enum class EAnimMovementModifierState : uint8 {
    None,
    Lamed,
    Hobbled,
};

