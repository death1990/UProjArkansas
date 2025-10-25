#pragma once
#include "CoreMinimal.h"
#include "OnAnimationProxyUsedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAnimationProxyUsed, AActor*, Owner, bool, bStartedInWaiting);

