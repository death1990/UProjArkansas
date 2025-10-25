#pragma once
#include "CoreMinimal.h"
#include "ConditionalScriptEventEntry.h"
#include "InteractionEvent.h"
#include "ConditionalScriptingEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UConditionalScriptingEvent : public UInteractionEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConditionalScriptEventEntry> ConditionalScriptEventArray;
    
public:
    UConditionalScriptingEvent();

};

