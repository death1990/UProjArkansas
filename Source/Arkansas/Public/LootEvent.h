#pragma once
#include "CoreMinimal.h"
#include "InteractionGateEvent.h"
#include "LootEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API ULootEvent : public UInteractionGateEvent {
    GENERATED_BODY()
public:
    ULootEvent();

};

