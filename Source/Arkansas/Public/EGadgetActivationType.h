#pragma once
#include "CoreMinimal.h"
#include "EGadgetActivationType.generated.h"

UENUM(BlueprintType)
enum class EGadgetActivationType : uint8 {
    Activate,
    Deactivate,
};

