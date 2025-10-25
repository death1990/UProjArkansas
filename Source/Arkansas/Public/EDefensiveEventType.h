#pragma once
#include "CoreMinimal.h"
#include "EDefensiveEventType.generated.h"

UENUM(BlueprintType)
enum class EDefensiveEventType : uint8 {
    None,
    ReactiveToMelee,
    ReactiveToRange,
    PreemptiveMelee,
    ReactiveToGrenade,
};

