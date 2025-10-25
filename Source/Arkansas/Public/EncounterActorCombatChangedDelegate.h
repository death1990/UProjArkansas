#pragma once
#include "CoreMinimal.h"
#include "EncounterActorCombatChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEncounterActorCombatChanged, AActor*, Actor, bool, bIsInCombat);

