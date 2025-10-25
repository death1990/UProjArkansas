#pragma once
#include "CoreMinimal.h"
#include "InteractionEvent.h"
#include "ScriptingEvent.generated.h"

class UScriptEvent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UScriptingEvent : public UInteractionEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UScriptEvent*> ScriptEvents;
    
public:
    UScriptingEvent();

};

