#pragma once
#include "CoreMinimal.h"
#include "EBarAnimationOptions.generated.h"

UENUM(BlueprintType)
enum class EBarAnimationOptions : uint8 {
    EAnimateUpOnly,
    EAnimateDownOnly,
    EAnimateAll,
    EDoNotAnimate,
};

