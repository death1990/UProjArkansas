#pragma once
#include "CoreMinimal.h"
#include "OnAnimProxyUseEndDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAnimProxyUseEnd, AActor*, AnimationProxyActor);

