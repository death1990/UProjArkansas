#pragma once
#include "CoreMinimal.h"
#include "ERadioPlayerType.generated.h"

UENUM(BlueprintType)
enum class ERadioPlayerType : uint8 {
    Invalid,
    PlayerRadio,
    ShelfRadio,
    Loudspeaker,
};

