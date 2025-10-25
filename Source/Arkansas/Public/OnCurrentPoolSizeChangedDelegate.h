#pragma once
#include "CoreMinimal.h"
#include "OnCurrentPoolSizeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCurrentPoolSizeChanged, int32, NewCurrentPoolSize);

