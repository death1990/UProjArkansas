#pragma once
#include "CoreMinimal.h"
#include "ECameraProfile.generated.h"

UENUM(BlueprintType)
enum class ECameraProfile : uint8 {
    None,
    Default,
    ADS,
    Crouched,
    Ladders,
    Mantling,
    Sprint,
    Downed,
};

