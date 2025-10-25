#pragma once
#include "CoreMinimal.h"
#include "StartConversationInstanceDelegate.generated.h"

class UOwConversationInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStartConversationInstance, UOwConversationInstance*, Instance);

