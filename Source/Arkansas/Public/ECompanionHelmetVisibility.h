#pragma once
#include "CoreMinimal.h"
#include "ECompanionHelmetVisibility.generated.h"

UENUM(BlueprintType)
enum class ECompanionHelmetVisibility : uint8 {
    Default,
    AlwaysOn,
    AlwaysOff,
};

