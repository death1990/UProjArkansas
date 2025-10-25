#pragma once
#include "CoreMinimal.h"
#include "EResponseConditionalType.generated.h"

UENUM(BlueprintType)
enum class EResponseConditionalType : uint8 {
    EDefaultCheck,
    ESkillCheck,
    EPerkCheck,
    EFlawCheck,
    ETraitCheck,
    EBackgroundCheck,
    EItemCheck,
    EBribeCheck,
    ECompanionCheck,
    EFactionCheck,
    EDoctorCheck,
    EQuestCheck,
    EGlobalInfoCheck,
};

