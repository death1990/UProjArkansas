#pragma once
#include "CoreMinimal.h"
#include "OnStatusEffectItemHoveredFocusedDelegate.generated.h"

class UStatusEffectEntryWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStatusEffectItemHoveredFocused, const UStatusEffectEntryWidget*, StatusEffectItem);

