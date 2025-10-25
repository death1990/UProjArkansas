#pragma once
#include "CoreMinimal.h"
#include "OnStatItemHoveredFocusedDelegate.generated.h"

class UGenericListEntryWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStatItemHoveredFocused, UGenericListEntryWidget*, StatItem);

