#pragma once
#include "CoreMinimal.h"
#include "EItemRarity.generated.h"

UENUM()
enum class EItemRarity : int32 {
    Common,
    Uncommon,
    Unique,
    Science,
};

