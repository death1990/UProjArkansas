#pragma once
#include "CoreMinimal.h"
#include "OnNoAttackActionResetDelegate.generated.h"

class AIndianaCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnNoAttackActionReset, AIndianaCharacter*, Character, bool, bReset);

