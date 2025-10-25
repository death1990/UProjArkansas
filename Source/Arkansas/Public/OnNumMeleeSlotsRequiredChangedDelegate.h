#pragma once
#include "CoreMinimal.h"
#include "OnNumMeleeSlotsRequiredChangedDelegate.generated.h"

class AIndianaAiController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNumMeleeSlotsRequiredChanged, AIndianaAiController*, ChangedController);

