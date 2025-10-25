#pragma once
#include "CoreMinimal.h"
#include "OnPlayerTraitItemHoveredFocusedDelegate.generated.h"

class UGenericListEntryWidget;
class UTrait;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerTraitItemHoveredFocused, UGenericListEntryWidget*, StatItem, UTrait*, TraitItem);

