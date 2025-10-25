#pragma once
#include "CoreMinimal.h"
#include "ERiftActorNavModifierMode.generated.h"

UENUM(BlueprintType)
enum class ERiftActorNavModifierMode : uint8 {
    None,
    Reveal,
    Disable,
};

