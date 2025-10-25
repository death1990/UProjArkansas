#pragma once
#include "CoreMinimal.h"
#include "InteractionGateEvent.h"
#include "TakedownEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UTakedownEvent : public UInteractionGateEvent {
    GENERATED_BODY()
public:
    UTakedownEvent();

};

