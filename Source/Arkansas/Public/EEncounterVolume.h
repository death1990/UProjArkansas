#pragma once
#include "CoreMinimal.h"
#include "EEncounterVolume.generated.h"

UENUM(BlueprintType)
enum class EEncounterVolume : uint8 {
    ActivationTrigger,
    DisengageTrigger,
    ReEngageTrigger,
    IntendedSpace,
    FallbackSpace,
};

