#pragma once
#include "CoreMinimal.h"
#include "ENonViolentCrimeTypeChatterParam.generated.h"

UENUM(BlueprintType)
enum class ENonViolentCrimeTypeChatterParam : uint8 {
    Hacking,
    Lockpicking,
    Stealing,
    Pickpocketing,
};

