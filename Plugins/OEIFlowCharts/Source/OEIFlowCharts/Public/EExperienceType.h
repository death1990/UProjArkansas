#pragma once
#include "CoreMinimal.h"
#include "EExperienceType.generated.h"

UENUM(BlueprintType)
enum class EExperienceType : uint8 {
    Minor,
    Normal,
    Major,
    Count,
};

