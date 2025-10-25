#pragma once
#include "CoreMinimal.h"
#include "OnAnimProxyUseStartDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAnimProxyUseStart, AActor*, AnimationProxyActor);

