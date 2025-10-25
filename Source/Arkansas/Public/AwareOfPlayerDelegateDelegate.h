#pragma once
#include "CoreMinimal.h"
#include "AwareOfPlayerDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAwareOfPlayerDelegate, bool, bRestoring);

