#pragma once
#include "CoreMinimal.h"
#include "EItemDisplayRule.generated.h"

UENUM(BlueprintType)
enum class EItemDisplayRule : uint8 {
    DoNotShow,
    ItemOnly,
    EquipOnCharacter,
    CharacterOnly,
};

