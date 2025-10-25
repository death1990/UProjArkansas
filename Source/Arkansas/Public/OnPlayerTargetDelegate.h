#pragma once
#include "CoreMinimal.h"
#include "OnPlayerTargetDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerTarget, AActor*, Target);

