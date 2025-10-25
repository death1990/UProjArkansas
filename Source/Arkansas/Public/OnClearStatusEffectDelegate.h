#pragma once
#include "CoreMinimal.h"
#include "StatusEffectInstanceHandle.h"
#include "OnClearStatusEffectDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClearStatusEffect, const FStatusEffectInstanceHandle&, StatusEffectHandle);

