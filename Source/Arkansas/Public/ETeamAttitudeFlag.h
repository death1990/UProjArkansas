#pragma once
#include "CoreMinimal.h"
#include "ETeamAttitudeFlag.generated.h"

UENUM()
enum class ETeamAttitudeFlag : uint32 {
    None,
    Friendly = 2,
    Neutral = 4,
    Hostile = 8,
    All = 4294967295,
};

