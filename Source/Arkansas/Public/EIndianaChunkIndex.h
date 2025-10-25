#pragma once
#include "CoreMinimal.h"
#include "EIndianaChunkIndex.generated.h"

UENUM(BlueprintType)
enum class EIndianaChunkIndex : uint8 {
    EarlyInteractive,
    BaseGame,
    DLC,
};

