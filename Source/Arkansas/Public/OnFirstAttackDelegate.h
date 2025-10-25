#pragma once
#include "CoreMinimal.h"
#include "OnFirstAttackDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFirstAttack, AActor*, Target);

