#pragma once
#include "CoreMinimal.h"
#include "ECreatureXPType.generated.h"

UENUM(BlueprintType)
enum class ECreatureXPType : uint8 {
    Invalid,
    Trivial,
    Fodder,
    Normal,
    Leader,
    Boss,
};

