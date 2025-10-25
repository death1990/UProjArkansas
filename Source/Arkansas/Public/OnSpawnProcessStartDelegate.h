#pragma once
#include "CoreMinimal.h"
#include "OnSpawnProcessStartDelegate.generated.h"

class AActor;
class ACharacterSpawner;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSpawnProcessStart, AActor*, Actor, ACharacterSpawner*, CharacterSpawner);

