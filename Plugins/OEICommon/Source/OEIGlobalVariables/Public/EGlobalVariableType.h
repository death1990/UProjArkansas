#pragma once
#include "CoreMinimal.h"
#include "EGlobalVariableType.generated.h"

UENUM(BlueprintType)
enum class EGlobalVariableType : uint8 {
    Bool,
    GameState,
    Uint8,
    Uint16,
    Uint32,
};

