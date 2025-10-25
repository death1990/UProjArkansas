#pragma once
#include "CoreMinimal.h"
#include "OnFirstAttackedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFirstAttacked, AActor*, Attacker);

