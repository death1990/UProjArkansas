#pragma once
#include "CoreMinimal.h"
#include "OnPlayerPerkItemHoveredFocusedDelegate.generated.h"

class UGenericListEntryWidget;
class UPerk;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerPerkItemHoveredFocused, UGenericListEntryWidget*, StatItem, UPerk*, PerkItem);

