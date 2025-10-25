#pragma once
#include "CoreMinimal.h"
#include "InteractionArrayEvent.h"
#include "FirstExecutableEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UFirstExecutableEvent : public UInteractionArrayEvent {
    GENERATED_BODY()
public:
    UFirstExecutableEvent();

};

