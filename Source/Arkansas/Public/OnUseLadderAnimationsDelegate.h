#pragma once
#include "CoreMinimal.h"
#include "OnUseLadderAnimationsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUseLadderAnimations, bool, bIsUsing);

