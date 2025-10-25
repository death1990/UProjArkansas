#pragma once
#include "CoreMinimal.h"
#include "EReputationActionType.generated.h"

UENUM(BlueprintType)
enum class EReputationActionType : uint8 {
    Invalid,
    Other,
    Damage,
    Kill,
    Trespass,
    CrimeRestrictedAreaDisguise,
    CrimeRestrictedAreaNoDisguise,
    CrimePickpocket,
    CrimeLockpick,
    CrimeHack,
    CrimeDisguised,
    CrimeTheft,
};

