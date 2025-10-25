#pragma once
#include "CoreMinimal.h"
#include "ECustomSpeakerCameraTrackingTargetType.generated.h"

UENUM(BlueprintType)
enum class ECustomSpeakerCameraTrackingTargetType : uint8 {
    WhenSpeakingToPlayer,
    WhenSpeakingToAnyone,
    AllNodes,
};

