#pragma once
#include "CoreMinimal.h"
#include "EOEISettingPlatformRestriction.generated.h"

UENUM(BlueprintType)
enum class EOEISettingPlatformRestriction : uint8 {
    None,
    WindowsOnly,
    ConsoleOnly,
};

