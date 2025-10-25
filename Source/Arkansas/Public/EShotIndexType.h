#pragma once
#include "CoreMinimal.h"
#include "EShotIndexType.generated.h"

UENUM(BlueprintType)
enum class EShotIndexType : uint8 {
    None,
    MagazineIndex,
    RampedIndex,
    ShotsSinceReloadIndex,
};

