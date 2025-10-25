#pragma once
#include "CoreMinimal.h"
#include "OnOwConversationInstanceShutdownDelegate.generated.h"

class UOwConversationInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOwConversationInstanceShutdown, UOwConversationInstance*, ConversationInstance);

