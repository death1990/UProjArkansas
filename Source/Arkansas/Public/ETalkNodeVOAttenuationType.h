#pragma once
#include "CoreMinimal.h"
#include "ETalkNodeVOAttenuationType.generated.h"

UENUM(BlueprintType)
enum class ETalkNodeVOAttenuationType : uint8 {
    Default,
    None,
    SmallDistance,
    MediumDistance,
    LargeDistance,
    Custom01,
    Custom02,
    Custom03,
    Custom04,
    Custom05,
    Custom06,
    Custom07,
    Custom08,
    Custom09,
    Custom10,
};

