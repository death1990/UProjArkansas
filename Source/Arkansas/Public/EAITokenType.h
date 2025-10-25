#pragma once
#include "CoreMinimal.h"
#include "EAITokenType.generated.h"

UENUM(BlueprintType)
enum class EAITokenType : uint8 {
    Grenade,
    SuppressingFire,
    Flank,
    Count,
};

