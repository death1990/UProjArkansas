#pragma once
#include "CoreMinimal.h"
#include "OnPlayerEnergyConsumedDelegate.generated.h"

class AIndianaCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerEnergyConsumed, AIndianaCharacter*, Character, float, ConsumedAmount);

