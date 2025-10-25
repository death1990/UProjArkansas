#pragma once
#include "CoreMinimal.h"
#include "DestructibleLightlyDamagedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDestructibleLightlyDamaged, AActor*, Instigator);

