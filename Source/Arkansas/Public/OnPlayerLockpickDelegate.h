#pragma once
#include "CoreMinimal.h"
#include "OnPlayerLockpickDelegate.generated.h"

class AActor;
class AIndianaCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerLockpick, AIndianaCharacter*, Character, AActor*, LockpickedActor);

