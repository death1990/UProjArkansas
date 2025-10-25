#pragma once
#include "CoreMinimal.h"
#include "OnSpawnerHitCapDelegate.generated.h"

class ACharacterSpawner;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpawnerHitCap, ACharacterSpawner*, CharacterSpawner);

