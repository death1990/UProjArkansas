#pragma once
#include "CoreMinimal.h"
#include "EBlueprintLogVerbosity.generated.h"

UENUM(BlueprintType)
enum class EBlueprintLogVerbosity : uint8 {
    Error,
    Warning,
    Display,
    Log,
    Verbose,
};

