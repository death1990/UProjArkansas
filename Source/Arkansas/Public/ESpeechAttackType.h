#pragma once
#include "CoreMinimal.h"
#include "ESpeechAttackType.generated.h"

UENUM(BlueprintType)
enum class ESpeechAttackType : uint8 {
    Invalid,
    Confused,
    Enraged,
    Frightened,
    Inspired,
    Count,
};

