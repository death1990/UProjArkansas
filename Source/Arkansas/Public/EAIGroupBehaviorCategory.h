#pragma once
#include "CoreMinimal.h"
#include "EAIGroupBehaviorCategory.generated.h"

UENUM(BlueprintType)
enum class EAIGroupBehaviorCategory : uint8 {
    None,
    Debug,
    SearchSetup,
    BespokeSetup = 4,
    CompanionCommand_SpecialAbility = 8,
    AlertResponse = 16,
    CrimeResponse = 32,
    ManualSetup = 64,
};

