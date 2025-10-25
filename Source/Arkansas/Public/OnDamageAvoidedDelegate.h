#pragma once
#include "CoreMinimal.h"
#include "OnDamageAvoidedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDamageAvoided, AActor*, Actor);

