#pragma once
#include "CoreMinimal.h"
#include "DestructibleDestroyedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDestructibleDestroyed, AActor*, Instigator);

