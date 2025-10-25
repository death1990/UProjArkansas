#pragma once
#include "CoreMinimal.h"
#include "ERagdollGetupState.generated.h"

UENUM(BlueprintType)
enum class ERagdollGetupState : uint8 {
    Inactive,
    AnimationDelayed,
    AnimationQueued,
    AnimationBegan,
    AnimationActive,
};

