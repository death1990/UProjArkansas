#pragma once
#include "CoreMinimal.h"
#include "InteractionScriptEvent.h"
#include "ToggleInteractable.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UToggleInteractable : public UInteractionScriptEvent {
    GENERATED_BODY()
public:
    UToggleInteractable();

};

