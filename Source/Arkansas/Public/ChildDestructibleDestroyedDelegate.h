#pragma once
#include "CoreMinimal.h"
#include "ChildDestructibleDestroyedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChildDestructibleDestroyed, AActor*, Instigator);

