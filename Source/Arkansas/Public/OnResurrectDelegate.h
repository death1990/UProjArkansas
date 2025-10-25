#pragma once
#include "CoreMinimal.h"
#include "OnResurrectDelegate.generated.h"

class AIndianaCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnResurrect, AIndianaCharacter*, InCharacter, AIndianaCharacter*, TargetCharacter);

