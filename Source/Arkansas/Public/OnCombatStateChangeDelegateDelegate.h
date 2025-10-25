#pragma once
#include "CoreMinimal.h"
#include "OnCombatStateChangeDelegateDelegate.generated.h"

class AIndianaCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCombatStateChangeDelegate, AIndianaCharacter*, Character, bool, bIsInCombat, bool, bRestoring);

