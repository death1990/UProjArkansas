#pragma once
#include "CoreMinimal.h"
#include "InteractionGateEvent.h"
#include "HackEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UHackEvent : public UInteractionGateEvent {
    GENERATED_BODY()
public:
    UHackEvent();

};

