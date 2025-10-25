#pragma once
#include "CoreMinimal.h"
#include "OnRemoveStatusEffectBPDelegate.generated.h"

class UStatusEffect;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRemoveStatusEffectBP, const UStatusEffect*, StatusEffect);

