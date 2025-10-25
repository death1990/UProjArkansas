#pragma once
#include "CoreMinimal.h"
#include "OnInteractStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInteractStateChanged, int32, NewState, int32, OldState);

