#pragma once
#include "CoreMinimal.h"
#include "EARCC_CharacterRotation.generated.h"

UENUM(BlueprintType)
enum class EARCC_CharacterRotation : uint8 {
    Front,
    QuarterRight,
    QuarterLeft,
    ProfileRight,
    ProfileLeft,
    Back,
    Count,
};

