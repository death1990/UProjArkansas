#pragma once
#include "CoreMinimal.h"
#include "OnPlayerStatItemHoveredFocusedDelegate.generated.h"

class UGenericListEntryWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerStatItemHoveredFocused, UGenericListEntryWidget*, StatItem);

