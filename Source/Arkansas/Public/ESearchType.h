#pragma once
#include "CoreMinimal.h"
#include "ESearchType.generated.h"

UENUM(BlueprintType)
enum class ESearchType : uint8 {
    Invalid,
    LookAtSearchPoint,
    InvestigateSearchPointLocation,
    InvestigateSearchPointArea,
    HandledByGroupBehavior,
};

