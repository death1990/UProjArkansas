#pragma once
#include "CoreMinimal.h"
#include "EGamepadLayoutType.generated.h"

UENUM(BlueprintType)
enum class EGamepadLayoutType : uint8 {
    Standard,
    Modern,
    Legacy,
    Classic,
};

