#pragma once
#include "CoreMinimal.h"
#include "ECameraContext.generated.h"

UENUM(BlueprintType)
enum class ECameraContext : uint8 {
    NonCombat,
    Combat,
};

