#pragma once
#include "CoreMinimal.h"
#include "EEncounterAggroType.generated.h"

UENUM(BlueprintType)
enum class EEncounterAggroType : uint8 {
    Unaware,
    ShareAwareness,
    ForceDetect,
};

