#pragma once
#include "CoreMinimal.h"
#include "OnInteractStateInteractDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractStateInteract, int32, State);

