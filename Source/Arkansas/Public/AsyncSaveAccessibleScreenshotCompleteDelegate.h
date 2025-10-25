#pragma once
#include "CoreMinimal.h"
#include "AsyncSaveAccessibleScreenshotCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncSaveAccessibleScreenshotComplete, const FString&, Filename);

