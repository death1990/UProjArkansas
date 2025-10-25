#pragma once
#include "CoreMinimal.h"
#include "EPointOfInterestXPType.generated.h"

UENUM(BlueprintType)
enum class EPointOfInterestXPType : uint8 {
    None,
    LargePointOfInterest,
    MediumPointOfInterest,
    SmallPointOfInterest,
    MicroPointOfInterest,
    Services,
};

