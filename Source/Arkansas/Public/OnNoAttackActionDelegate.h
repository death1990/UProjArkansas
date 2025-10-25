#pragma once
#include "CoreMinimal.h"
#include "OnNoAttackActionDelegate.generated.h"

class AIndianaCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNoAttackAction, AIndianaCharacter*, Character);

