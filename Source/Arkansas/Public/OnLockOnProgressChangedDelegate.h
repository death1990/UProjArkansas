#pragma once
#include "CoreMinimal.h"
#include "OnLockOnProgressChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLockOnProgressChanged, float, Progress);

