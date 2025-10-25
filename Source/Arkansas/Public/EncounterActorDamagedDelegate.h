#pragma once
#include "CoreMinimal.h"
#include "EncounterActorDamagedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FEncounterActorDamaged, AActor*, Actor, float, PrevNormalizedHealth, float, CurrNormalizedHealth, AActor*, Instigator);

