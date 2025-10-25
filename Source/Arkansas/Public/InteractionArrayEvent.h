#pragma once
#include "CoreMinimal.h"
#include "InteractionEvent.h"
#include "InteractionEventArrayEntry.h"
#include "InteractionArrayEvent.generated.h"

class UScriptEvent;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UInteractionArrayEvent : public UInteractionEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UInteractionEvent*> StateEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInteractionEventArrayEntry> ChildEvents;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UScriptEvent*> ScriptEvents;
    
public:
    UInteractionArrayEvent();

};

