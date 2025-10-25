#pragma once
#include "CoreMinimal.h"
#include "OnActorDoneSpawningDelegate.generated.h"

class AActor;
class ACharacterSpawner;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActorDoneSpawning, AActor*, Actor, ACharacterSpawner*, CharacterSpawner);

