#pragma once
#include "CoreMinimal.h"
#include "OnPlayerStatusEffectItemHoveredFocusedDelegate.generated.h"

class UStatusEffectEntryWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerStatusEffectItemHoveredFocused, const UStatusEffectEntryWidget*, StatusEffectItem);

