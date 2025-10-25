#pragma once
#include "CoreMinimal.h"
#include "InteractionEvent.h"
#include "ConsumeEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UConsumeEvent : public UInteractionEvent {
    GENERATED_BODY()
public:
    UConsumeEvent();

};

