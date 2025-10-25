#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectCheckType.generated.h"

UENUM(BlueprintType)
enum class EStatusEffectCheckType : uint8 {
    SingleAdded,
    SingleRemoved,
    AnyAdded,
    AllAdded,
    Hostile,
};

