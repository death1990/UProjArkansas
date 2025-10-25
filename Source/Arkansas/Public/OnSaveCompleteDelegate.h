#pragma once
#include "CoreMinimal.h"
#include "ESaveGameResult.h"
#include "ESaveGameType.h"
#include "OnSaveCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSaveComplete, ESaveGameResult, SaveResult, ESaveGameType, SaveType);

