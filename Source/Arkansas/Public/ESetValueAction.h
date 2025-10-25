#pragma once
#include "CoreMinimal.h"
#include "ESetValueAction.generated.h"

UENUM(BlueprintType)
enum class ESetValueAction : uint8 {
    None,
    Default,
    Min,
    Max,
    Match,
};

