#pragma once
#include "CoreMinimal.h"
#include "EAttachSocketType.generated.h"

UENUM(BlueprintType)
enum class EAttachSocketType : uint8 {
    ByName,
    ByParams,
    CenterOfMass,
};

