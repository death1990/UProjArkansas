#pragma once
#include "CoreMinimal.h"
#include "EConditionalCrimeType.generated.h"

UENUM(BlueprintType)
enum class EConditionalCrimeType : uint8 {
    None,
    RestrictedArea,
    Pickpocket,
    Lockpick,
    Hack,
    Disguised,
    Theft,
    Violence,
};

