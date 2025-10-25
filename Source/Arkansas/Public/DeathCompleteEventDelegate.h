#pragma once
#include "CoreMinimal.h"
#include "DeathCompleteEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDeathCompleteEvent, AActor*, DeadActor);

