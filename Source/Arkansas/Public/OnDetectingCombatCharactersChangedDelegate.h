#pragma once
#include "CoreMinimal.h"
#include "OnDetectingCombatCharactersChangedDelegate.generated.h"

class AIndianaCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDetectingCombatCharactersChanged, AIndianaCharacter*, Character, bool, bAdded);

