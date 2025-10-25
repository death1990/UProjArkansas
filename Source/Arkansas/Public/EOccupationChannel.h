#pragma once
#include "CoreMinimal.h"
#include "EOccupationChannel.generated.h"

UENUM(BlueprintType)
enum class EOccupationChannel : uint8 {
    Firing,
    CharacterArea,
    Count,
};

