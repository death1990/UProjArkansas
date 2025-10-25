#pragma once
#include "CoreMinimal.h"
#include "OnDormancyChangedDelegate.generated.h"

class AIndianaAiCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDormancyChanged, AIndianaAiCharacter*, Character, bool, bNewDormancy);

