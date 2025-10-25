#pragma once
#include "CoreMinimal.h"
#include "OnReviveDelegate.generated.h"

class AIndianaCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRevive, AIndianaCharacter*, Player, bool, bDebug);

