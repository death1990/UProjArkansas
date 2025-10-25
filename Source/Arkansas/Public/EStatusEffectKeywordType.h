#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectKeywordType.generated.h"

UENUM(BlueprintType)
enum class EStatusEffectKeywordType : uint8 {
    None,
    Acid,
    Bleed,
    Disease,
    Fire,
    Ice,
    Poison,
};

