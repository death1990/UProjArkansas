#pragma once
#include "CoreMinimal.h"
#include "ECombatStartReasonChatterParam.generated.h"

UENUM(BlueprintType)
enum class ECombatStartReasonChatterParam : uint8 {
    WasAttacked,
    FoundHostile,
    FoundViolentCriminal,
    CriminalEvading,
    Trespassing,
};

