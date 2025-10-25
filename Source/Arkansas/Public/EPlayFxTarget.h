#pragma once
#include "CoreMinimal.h"
#include "EPlayFxTarget.generated.h"

UENUM(BlueprintType)
enum class EPlayFxTarget : uint8 {
    PlayerOnly,
    NPCOnly,
    Any,
};

