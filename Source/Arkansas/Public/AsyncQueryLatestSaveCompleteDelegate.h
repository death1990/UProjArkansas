#pragma once
#include "CoreMinimal.h"
#include "AsyncQueryLatestSaveCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncQueryLatestSaveComplete, const FString&, LatestSaveName);

