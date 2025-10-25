#pragma once
#include "CoreMinimal.h"
#include "EMapFlags.generated.h"

UENUM(BlueprintType)
enum class EMapFlags : uint8 {
    None,
    Known,
    Visited,
};

