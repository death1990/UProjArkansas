#pragma once
#include "CoreMinimal.h"
#include "ECrimeType.generated.h"

UENUM(BlueprintType)
enum class ECrimeType : uint8 {
    None,
    RestrictedArea,
    Pickpocket,
    Lockpick,
    Hack,
    Disguised,
    Theft,
    Violence,
    Disarm,
};

