#pragma once
#include "CoreMinimal.h"
#include "ECameraShot.generated.h"

UENUM(BlueprintType)
enum class ECameraShot : uint8 {
    Long,
    Full,
    Medium,
    CloseUp,
    Custom,
    Count,
};

