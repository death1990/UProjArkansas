#pragma once
#include "CoreMinimal.h"
#include "EComputerType.generated.h"

UENUM(BlueprintType)
enum class EComputerType : uint8 {
    Invalid,
    AuntiesChoice,
    OrderOfTheAscendent,
    Protectorate,
    EarthDirectorate,
    Count,
};

