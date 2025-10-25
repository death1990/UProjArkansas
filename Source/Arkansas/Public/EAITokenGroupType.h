#pragma once
#include "CoreMinimal.h"
#include "EAITokenGroupType.generated.h"

UENUM(BlueprintType)
enum class EAITokenGroupType : uint8 {
    Generic,
    Player,
    AntiPlayer,
};

