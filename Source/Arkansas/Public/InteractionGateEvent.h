#pragma once
#include "CoreMinimal.h"
#include "ScriptingEvent.h"
#include "InteractionGateEvent.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UInteractionGateEvent : public UScriptingEvent {
    GENERATED_BODY()
public:
    UInteractionGateEvent();

};

