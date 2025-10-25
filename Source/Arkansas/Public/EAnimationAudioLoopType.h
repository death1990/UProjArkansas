#pragma once
#include "CoreMinimal.h"
#include "EAnimationAudioLoopType.generated.h"

UENUM(BlueprintType)
enum class EAnimationAudioLoopType : uint8 {
    None,
    Furniture,
    Jump,
    Thrust,
    AnimNotifyState,
    Count,
};

