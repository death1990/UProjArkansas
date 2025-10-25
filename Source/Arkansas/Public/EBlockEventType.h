#pragma once
#include "CoreMinimal.h"
#include "EBlockEventType.generated.h"

UENUM(BlueprintType)
enum class EBlockEventType : uint8 {
    BlockStart,
    BlockEnd,
    BlockHit,
    BlockPerfect,
};

