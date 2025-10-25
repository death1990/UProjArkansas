#pragma once
#include "CoreMinimal.h"
#include "EMechJumpTaskState.generated.h"

UENUM(BlueprintType)
enum class EMechJumpTaskState : uint8 {
    STATE_NONE,
    STATE_WAIT,
    STATE_JUMP_INTRO,
    STATE_JUMP,
    STATE_POST_JUMP,
};

