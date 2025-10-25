#pragma once
#include "CoreMinimal.h"
#include "EInterrogationResult.generated.h"

UENUM(BlueprintType)
enum class EInterrogationResult : uint8 {
    Invalid,
    Bribe,
    Talk,
    Fight,
};

