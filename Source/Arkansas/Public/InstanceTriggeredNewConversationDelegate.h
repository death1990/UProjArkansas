#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "InstanceTriggeredNewConversationDelegate.generated.h"

class UOwConversationInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FInstanceTriggeredNewConversation, UOwConversationInstance*, Instance, const FGuid&, LastConversationID, const FGuid&, NewConversationID);

