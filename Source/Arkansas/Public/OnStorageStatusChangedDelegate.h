#pragma once
#include "CoreMinimal.h"
#include "ESaveGameStorageStatus.h"
#include "OnStorageStatusChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStorageStatusChanged, ESaveGameStorageStatus, NewStatus);

