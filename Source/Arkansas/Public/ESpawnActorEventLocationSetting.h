#pragma once
#include "CoreMinimal.h"
#include "ESpawnActorEventLocationSetting.generated.h"

UENUM(BlueprintType)
enum class ESpawnActorEventLocationSetting : uint8 {
    MatchTargetActor,
    ProjectToGround,
};

