#pragma once
#include "CoreMinimal.h"
#include "EThirdPersonSocket.generated.h"

UENUM(BlueprintType)
enum class EThirdPersonSocket : uint8 {
    None,
    Chest,
    Head,
    RightArm,
    LeftArm,
    RightLeg,
    LeftLeg,
    Groin,
};

