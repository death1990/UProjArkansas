#pragma once
#include "CoreMinimal.h"
#include "ECompanionCombatAbilitySuccessAudioTiming.generated.h"

UENUM(BlueprintType)
enum class ECompanionCombatAbilitySuccessAudioTiming : uint8 {
    PlayOnGroupBehaviorStart,
    PlayOnEnteringCriticalSection,
};

