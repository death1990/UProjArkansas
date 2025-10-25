#pragma once
#include "CoreMinimal.h"
#include "EFxTargetType.generated.h"

UENUM(BlueprintType)
enum class EFxTargetType : uint8 {
    All,
    NPCOnly,
    PlayerOnly,
};

