#pragma once
#include "CoreMinimal.h"
#include "EncounterActorSpawnedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEncounterActorSpawned, AActor*, Actor);

