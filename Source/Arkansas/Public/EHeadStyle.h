#pragma once
#include "CoreMinimal.h"
#include "EHeadStyle.generated.h"

UENUM(BlueprintType)
enum class EHeadStyle : uint8 {
    Normal,
    NormalWithoutBeard,
    CappedHair,
    CappedHairWithoutBeard,
    HiddenHair,
    HiddenHairWithoutBeard,
    CompletelyHidden,
    None,
};

