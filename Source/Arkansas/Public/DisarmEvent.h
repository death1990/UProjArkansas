#pragma once
#include "CoreMinimal.h"
#include "ETrapTriggerState.h"
#include "InteractionGateEvent.h"
#include "DisarmEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UDisarmEvent : public UInteractionGateEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrapTriggerState InitialState;
    
public:
    UDisarmEvent();

};

