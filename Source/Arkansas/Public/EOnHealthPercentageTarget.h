#pragma once
#include "CoreMinimal.h"
#include "EOnHealthPercentageTarget.generated.h"

UENUM(BlueprintType)
enum class EOnHealthPercentageTarget : uint8 {
    Self,
    Player,
    Companions,
};

