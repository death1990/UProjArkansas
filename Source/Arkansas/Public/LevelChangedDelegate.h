#pragma once
#include "CoreMinimal.h"
#include "LevelChangedDelegate.generated.h"

class UCharacterInfoComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLevelChanged, UCharacterInfoComponent*, CharacterInfoComponent, int32, Level);

