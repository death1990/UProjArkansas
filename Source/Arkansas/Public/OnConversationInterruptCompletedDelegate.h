#pragma once
#include "CoreMinimal.h"
#include "OnConversationInterruptCompletedDelegate.generated.h"

class AIndianaAiCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConversationInterruptCompleted, AIndianaAiCharacter*, Character);

