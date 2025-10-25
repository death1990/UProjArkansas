#pragma once
#include "CoreMinimal.h"
#include "EncounterActorKilledDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEncounterActorKilled, AActor*, Actor);

