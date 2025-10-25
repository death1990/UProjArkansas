#pragma once
#include "CoreMinimal.h"
#include "EActorPoolingMethod.generated.h"

UENUM()
enum class EActorPoolingMethod : int32 {
    Unregister,
    HideAndDeactivate,
    HideAndDisable,
    Hide,
    Nothing,
};

