#pragma once
#include "CoreMinimal.h"
#include "EAbilityEventType.h"
#include "OnAbilityEventDelegateDelegate.generated.h"

class AIndianaAiCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAbilityEventDelegate, AIndianaAiCharacter*, Caster, EAbilityEventType, AbilityEventType, int32, Identifier);

