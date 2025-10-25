#pragma once
#include "CoreMinimal.h"
#include "OnExpandableAreaExpansionChangedDelegate2.generated.h"

class UExpandableAreaBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnExpandableAreaExpansionChanged, UExpandableAreaBase*, Area, bool, bIsExpanded);

