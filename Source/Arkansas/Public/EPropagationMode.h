#pragma once
#include "CoreMinimal.h"
#include "EPropagationMode.generated.h"

UENUM(BlueprintType)
enum class EPropagationMode : uint8 {
    None,
    Parent,
    Indirect,
};

