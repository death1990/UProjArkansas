#pragma once
#include "CoreMinimal.h"
#include "DestructibleDamagedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDestructibleDamaged, AActor*, Instigator);

