#pragma once
#include "CoreMinimal.h"
#include "EPhaseOfDay.generated.h"

UENUM(BlueprintType)
enum class EPhaseOfDay : uint8 {
    Morning,
    Midday,
    Afternoon,
    Evening,
    Night,
};

