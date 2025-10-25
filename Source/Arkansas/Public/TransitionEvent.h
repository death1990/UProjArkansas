#pragma once
#include "CoreMinimal.h"
#include "InteractionGateEvent.h"
#include "TransitionEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UTransitionEvent : public UInteractionGateEvent {
    GENERATED_BODY()
public:
    UTransitionEvent();

};

