#pragma once
#include "CoreMinimal.h"
#include "OnDamageTakenDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDamageTaken, const AActor*, Instigator);

