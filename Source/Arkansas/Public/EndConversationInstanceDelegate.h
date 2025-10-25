#pragma once
#include "CoreMinimal.h"
#include "EndConversationInstanceDelegate.generated.h"

class UOwConversationInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEndConversationInstance, UOwConversationInstance*, Instance);

