#pragma once
#include "CoreMinimal.h"
#include "EAudioImpactType.generated.h"

UENUM(BlueprintType)
enum class EAudioImpactType : uint8 {
    PlayerImpacted,
    PlayerImpactedNPC,
    GeneralImpact,
    CompanionImpacted,
    GeneralImpactByPlayer,
    CompanionImpactedNPC,
    NPCImpactedNPC,
};

