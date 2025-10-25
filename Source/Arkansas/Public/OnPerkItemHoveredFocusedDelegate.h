#pragma once
#include "CoreMinimal.h"
#include "OnPerkItemHoveredFocusedDelegate.generated.h"

class UPerksListEntry;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPerkItemHoveredFocused, UPerksListEntry*, PerkItem);

