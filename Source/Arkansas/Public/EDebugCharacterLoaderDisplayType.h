#pragma once
#include "CoreMinimal.h"
#include "EDebugCharacterLoaderDisplayType.generated.h"

UENUM(BlueprintType)
enum class EDebugCharacterLoaderDisplayType : uint8 {
    Default,
    UserNames,
    UserGroups,
    MyLoadouts,
};

