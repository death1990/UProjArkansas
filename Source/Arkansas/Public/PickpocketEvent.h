#pragma once
#include "CoreMinimal.h"
#include "InteractionGateEvent.h"
#include "PickpocketEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UPickpocketEvent : public UInteractionGateEvent {
    GENERATED_BODY()
public:
    UPickpocketEvent();

};

