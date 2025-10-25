#pragma once
#include "CoreMinimal.h"
#include "ESaveGameType.generated.h"

UENUM(BlueprintType)
enum class ESaveGameType : uint8 {
    Standard,
    Quicksave,
    Autosave,
    PostGame,
    PointOfNoReturn,
    BeforeSkip,
    BeforeEVTransition,
    Invalid = 255,
};

