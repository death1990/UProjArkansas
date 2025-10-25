#pragma once
#include "CoreMinimal.h"
#include "ECompanionCommandEventTarget.generated.h"

UENUM(BlueprintType)
enum class ECompanionCommandEventTarget : uint8 {
    Companion,
    Enemy,
};

