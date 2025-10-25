#pragma once
#include "CoreMinimal.h"
#include "EOEICineModifierRotationMode.generated.h"

UENUM(BlueprintType)
enum class EOEICineModifierRotationMode : uint8 {
    RotateActorDynamically,
    RotateAdditively,
    RotateAdditivelyWithSimulatedCurrentRotation,
};

