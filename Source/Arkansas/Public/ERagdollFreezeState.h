#pragma once
#include "CoreMinimal.h"
#include "ERagdollFreezeState.generated.h"

UENUM(BlueprintType)
enum class ERagdollFreezeState : uint8 {
    None,
    PrePhysicsFreeze,
    Frozen,
    PostLoad,
};

