#pragma once
#include "CoreMinimal.h"
#include "EActivation.generated.h"

UENUM(BlueprintType)
enum class EActivation : uint8 {
    None,
    PostInitialization,
    Exclusive,
    Never = 4,
};

