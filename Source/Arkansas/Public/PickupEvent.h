#pragma once
#include "CoreMinimal.h"
#include "InteractionGateEvent.h"
#include "PickupEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UPickupEvent : public UInteractionGateEvent {
    GENERATED_BODY()
public:
    UPickupEvent();

};

