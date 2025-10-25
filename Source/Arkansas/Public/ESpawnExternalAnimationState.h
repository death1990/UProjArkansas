#pragma once
#include "CoreMinimal.h"
#include "ESpawnExternalAnimationState.generated.h"

UENUM(BlueprintType)
enum ESpawnExternalAnimationState {
    AnimationState_Opening,
    AnimationState_Open,
    AnimationState_Closing,
    AnimationState_Closed,
    AnimationState_AnticipationOpening,
};

