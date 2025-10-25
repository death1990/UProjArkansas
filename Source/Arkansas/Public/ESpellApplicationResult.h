#pragma once
#include "CoreMinimal.h"
#include "ESpellApplicationResult.generated.h"

UENUM(BlueprintType)
enum class ESpellApplicationResult : uint8 {
    NotApplied,
    OneShot,
    Persistent,
};

