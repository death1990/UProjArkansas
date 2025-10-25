#pragma once
#include "CoreMinimal.h"
#include "EDespawnRules.generated.h"

UENUM(BlueprintType)
enum class EDespawnRules : uint8 {
    Idle,
    Combat,
    Never,
};

