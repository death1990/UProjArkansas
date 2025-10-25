#pragma once
#include "CoreMinimal.h"
#include "EMechJumpState.generated.h"

UENUM(BlueprintType)
enum class EMechJumpState : uint8 {
    None,
    Wait,
    JumpIntro,
    Jump,
    PostJump,
};

