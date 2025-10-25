#pragma once
#include "CoreMinimal.h"
#include "ELostTargetSearchMode.generated.h"

UENUM(BlueprintType)
enum class ELostTargetSearchMode : uint8 {
    DirectSearch,
    RepositionSearch,
    None,
};

