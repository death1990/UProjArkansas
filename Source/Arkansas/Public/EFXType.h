#pragma once
#include "CoreMinimal.h"
#include "EFXType.generated.h"

UENUM(BlueprintType)
enum class EFXType : uint8 {
    OneShot,
    Looping,
    Triggered,
};

