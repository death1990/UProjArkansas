#pragma once
#include "CoreMinimal.h"
#include "OnGroupBehaviorStatusChangedDelegate.generated.h"

class AIndianaAiCharacter;
class AIndianaAiController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGroupBehaviorStatusChanged, AIndianaAiController*, AIController, AIndianaAiCharacter*, AICharacter);

