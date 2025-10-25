#pragma once
#include "CoreMinimal.h"
#include "EARCC_SkillSelectionStep.generated.h"

UENUM(BlueprintType)
enum class EARCC_SkillSelectionStep : uint8 {
    EDumbSkillSelection,
    ENormalSkillSelection,
    INVALID,
};

