#pragma once
#include "CoreMinimal.h"
#include "EAutoDocInteractState.generated.h"

UENUM(BlueprintType)
enum class EAutoDocInteractState : uint8 {
    Usable,
    Hackable,
    ExtraUse,
    Depleted,
    Count,
};

