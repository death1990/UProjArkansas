#pragma once
#include "CoreMinimal.h"
#include "EPlatformFamily.generated.h"

UENUM(BlueprintType)
enum class EPlatformFamily : uint8 {
    PC,
    Xbox,
    PS5,
    Switch,
};

