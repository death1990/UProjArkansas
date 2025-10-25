#pragma once
#include "CoreMinimal.h"
#include "EBlueprintDefinedScriptCategory.generated.h"

UENUM(BlueprintType)
enum class EBlueprintDefinedScriptCategory : uint8 {
    Default,
    Encounter,
    GenericScript,
    Count,
};

