#pragma once
#include "CoreMinimal.h"
#include "OnPlayerFlawItemHoveredFocusedDelegate.generated.h"

class UFlaw;
class UGenericListEntryWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerFlawItemHoveredFocused, UGenericListEntryWidget*, StatItem, UFlaw*, FlawItem);

