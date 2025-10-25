#pragma once
#include "CoreMinimal.h"
#include "ELoadGameResult.h"
#include "OnLoadCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLoadComplete, const FString&, Filename, ELoadGameResult, Result);

