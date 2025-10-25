#pragma once
#include "CoreMinimal.h"
#include "InteractionEvent.h"
#include "ConversationEvent.generated.h"

class UOwConversationInstance;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UConversationEvent : public UInteractionEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOwConversationInstance* ConversationInstance;
    
public:
    UConversationEvent();

};

