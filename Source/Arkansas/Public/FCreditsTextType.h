#pragma once
#include "CoreMinimal.h"
#include "FCreditsTextType.generated.h"

UENUM(BlueprintType)
enum class FCreditsTextType : uint8 {
    None,
    Header,
    Subheader,
    Title,
    Subtitle,
    Normal,
    Copyright,
    Song,
};

