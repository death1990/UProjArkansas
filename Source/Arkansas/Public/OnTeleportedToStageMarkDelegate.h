#pragma once
#include "CoreMinimal.h"
#include "OnTeleportedToStageMarkDelegate.generated.h"

class AIndianaCharacter;
class AStageMarkActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTeleportedToStageMark, AIndianaCharacter*, Character, AStageMarkActor*, StageMark);

