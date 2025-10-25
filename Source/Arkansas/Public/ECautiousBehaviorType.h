#pragma once
#include "CoreMinimal.h"
#include "ECautiousBehaviorType.generated.h"

UENUM(BlueprintType)
enum class ECautiousBehaviorType : uint8 {
    WanderSearch,
    StationarySearch,
};

