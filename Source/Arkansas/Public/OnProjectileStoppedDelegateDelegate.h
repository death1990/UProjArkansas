#pragma once
#include "CoreMinimal.h"
#include "OnProjectileStoppedDelegateDelegate.generated.h"

class AProjectile;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnProjectileStoppedDelegate, AProjectile*, StoppedProjectile);

