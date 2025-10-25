#pragma once
#include "CoreMinimal.h"
#include "OnScrollingPerkClickedDelegate.generated.h"

class UScrollingPerksListEntry;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScrollingPerkClicked, UScrollingPerksListEntry*, ClickedPerkEntry);

