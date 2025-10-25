#pragma once
#include "CoreMinimal.h"
#include "ERestrictedAreaState.h"
#include "OnRestrcitedAreaStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRestrcitedAreaStateChanged, ERestrictedAreaState, NewState);

