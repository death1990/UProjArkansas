#pragma once
#include "CoreMinimal.h"
#include "EButtonType.generated.h"

UENUM(BlueprintType)
enum class EButtonType : uint8 {
    Normal,
    Selectable,
};

