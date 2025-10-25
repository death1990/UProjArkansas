#pragma once
#include "CoreMinimal.h"
#include "ETriggerTarget.generated.h"

UENUM()
enum class ETriggerTarget : int8 {
    PlayerTarget,
    AnimMeshOwner,
    Count,
};

