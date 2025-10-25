#pragma once
#include "CoreMinimal.h"
#include "EItemFamily.generated.h"

UENUM(BlueprintType)
enum class EItemFamily : uint8 {
    Weapon,
    Armor,
    Helmet,
};

