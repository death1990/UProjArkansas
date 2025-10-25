#pragma once
#include "CoreMinimal.h"
#include "EAITokenTargetType.generated.h"

UENUM(BlueprintType)
enum class EAITokenTargetType : uint8 {
    None,
    PlayerOnly,
    PrioritizePlayer,
    Override,
};

