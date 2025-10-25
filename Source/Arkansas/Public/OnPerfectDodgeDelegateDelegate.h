#pragma once
#include "CoreMinimal.h"
#include "OnPerfectDodgeDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPerfectDodgeDelegate, AActor*, Dodger, AActor*, Attacker);

