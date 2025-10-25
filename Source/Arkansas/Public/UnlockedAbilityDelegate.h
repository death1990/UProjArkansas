#pragma once
#include "CoreMinimal.h"
#include "EUnlockAbility.h"
#include "UnlockedAbilityDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUnlockedAbility, EUnlockAbility, Ability);

