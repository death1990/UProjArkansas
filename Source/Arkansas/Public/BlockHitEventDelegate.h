#pragma once
#include "CoreMinimal.h"
#include "BlockHitEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBlockHitEvent, AActor*, Blocker, AActor*, Attacker, bool, bBlockedMeleeAttack);

