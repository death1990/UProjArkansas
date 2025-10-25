#pragma once
#include "CoreMinimal.h"
#include "EDitherState.generated.h"

UENUM(BlueprintType)
enum class EDitherState : uint8 {
    Dithered,
    FadeOut,
    FadeIn,
    ForceInvisible,
};

