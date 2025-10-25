#pragma once
#include "CoreMinimal.h"
#include "EGadgetType.generated.h"

UENUM(BlueprintType)
enum class EGadgetType : uint8 {
    Dematerializer,
    Shield,
    TTD,
    XRay,
};

