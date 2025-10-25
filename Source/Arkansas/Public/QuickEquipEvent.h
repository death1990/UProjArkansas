#pragma once
#include "CoreMinimal.h"
#include "InteractionGateEvent.h"
#include "QuickEquipEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UQuickEquipEvent : public UInteractionGateEvent {
    GENERATED_BODY()
public:
    UQuickEquipEvent();

};

