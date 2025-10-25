#pragma once
#include "CoreMinimal.h"
#include "ECharacterDeathTriBool.generated.h"

UENUM(BlueprintType)
enum class ECharacterDeathTriBool : uint8 {
    BFalse,
    BTrue,
    Any,
    Count,
};

