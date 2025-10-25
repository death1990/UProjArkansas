#pragma once
#include "CoreMinimal.h"
#include "EZyraniumType.h"
#include "OnHazardOccupancyChangeDelegate.generated.h"

class AIndianaCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnHazardOccupancyChange, AIndianaCharacter*, Character, bool, bInside, EZyraniumType, ZyraniumType);

