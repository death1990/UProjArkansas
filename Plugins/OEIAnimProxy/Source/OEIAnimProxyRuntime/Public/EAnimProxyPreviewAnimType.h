#pragma once
#include "CoreMinimal.h"
#include "EAnimProxyPreviewAnimType.generated.h"

UENUM(BlueprintType)
enum class EAnimProxyPreviewAnimType : uint8 {
    Idle,
    Start,
    Exit,
    CombatExit,
};

