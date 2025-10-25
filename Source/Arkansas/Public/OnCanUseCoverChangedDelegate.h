#pragma once
#include "CoreMinimal.h"
#include "OnCanUseCoverChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCanUseCoverChanged, bool, bNewCanUseCover);

