#pragma once
#include "CoreMinimal.h"
#include "OnDestroyProjectileDelegateWithPointerDelegate.generated.h"

class AProjectile;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDestroyProjectileDelegateWithPointer, AProjectile*, DestroyedProjectile);

