#pragma once
#include "CoreMinimal.h"
#include "OnSpotterTriggeredDelegate.generated.h"

class AIndianaAiCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpotterTriggered, const AIndianaAiCharacter*, Actor);

