#pragma once
#include "CoreMinimal.h"
#include "ECompanionState.generated.h"

UENUM(BlueprintType)
enum class ECompanionState : uint8 {
    CompanionNotRecruited,
    CompanionRecruited,
    CompanionInActiveParty,
    CompanionDismissed,
};

