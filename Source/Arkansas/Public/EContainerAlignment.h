#pragma once
#include "CoreMinimal.h"
#include "EContainerAlignment.generated.h"

UENUM(BlueprintType)
enum class EContainerAlignment : uint8 {
    ETopLeft,
    ETopRight,
    EBotLeft,
    EBotRight,
};

