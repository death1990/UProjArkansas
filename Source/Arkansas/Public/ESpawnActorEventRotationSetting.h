#pragma once
#include "CoreMinimal.h"
#include "ESpawnActorEventRotationSetting.generated.h"

UENUM(BlueprintType)
enum class ESpawnActorEventRotationSetting : uint8 {
    DoNotRotate,
    MatchTargetActor,
    GroundNormal,
    MatchOwnerOrientation,
};

