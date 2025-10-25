#pragma once
#include "CoreMinimal.h"
#include "EOEIEmotionLayer.generated.h"

UENUM(BlueprintType)
enum class EOEIEmotionLayer : uint8 {
    Expression,
    Paralingual,
    Count,
};

