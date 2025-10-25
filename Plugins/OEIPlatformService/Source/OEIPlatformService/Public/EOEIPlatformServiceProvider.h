#pragma once
#include "CoreMinimal.h"
#include "EOEIPlatformServiceProvider.generated.h"

UENUM(BlueprintType)
enum class EOEIPlatformServiceProvider : uint8 {
    Invalid,
    Development,
    GDK,
    Steam = 4,
    BattleNet = 8,
    PSN = 16,
    XSAPI = 32,
    All = 63,
    Default = 128,
};

