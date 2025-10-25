#pragma once
#include "CoreMinimal.h"
#include "ECameraPosition.generated.h"

UENUM(BlueprintType)
enum class ECameraPosition : uint8 {
    FirstPerson,
    Front,
    ThreeQuarters,
    Side,
    OverTheShoulder,
    TopDown,
    Custom,
    Count,
};

