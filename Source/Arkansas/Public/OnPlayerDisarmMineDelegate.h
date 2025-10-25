#pragma once
#include "CoreMinimal.h"
#include "OnPlayerDisarmMineDelegate.generated.h"

class AActor;
class AIndianaCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerDisarmMine, AIndianaCharacter*, Character, AActor*, DisarmedMine);

