#pragma once
#include "CoreMinimal.h"
#include "EAchievementOnlineUpdateType.generated.h"

UENUM(BlueprintType)
enum class EAchievementOnlineUpdateType : uint8 {
    None,
    ProgressChangeOnly,
    Force,
};

