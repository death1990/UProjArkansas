#pragma once
#include "CoreMinimal.h"
#include "EAIDisableMask.generated.h"

UENUM(BlueprintType)
enum class EAIDisableMask : uint8 {
    None,
    StealthTakedown,
    RevivalParticipant,
    Ragdoll = 4,
};

