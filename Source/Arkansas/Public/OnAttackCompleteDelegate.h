#pragma once
#include "CoreMinimal.h"
#include "OnAttackCompleteDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAttackComplete, AActor*, Attacker, int32, AttackID, bool, bIsQuickMelee);

