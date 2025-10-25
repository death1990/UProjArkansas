#pragma once
#include "CoreMinimal.h"
#include "EFactionVisibility.generated.h"

UENUM(BlueprintType)
enum class EFactionVisibility : uint8 {
    Never,
    Always,
    Encounter,
};

