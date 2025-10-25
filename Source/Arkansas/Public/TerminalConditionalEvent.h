#pragma once
#include "CoreMinimal.h"
#include "ETerminalLockState.h"
#include "InteractionEvent.h"
#include "TerminalConditionalEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UTerminalConditionalEvent : public UInteractionEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<ETerminalLockState, UInteractionEvent*> Events;
    
public:
    UTerminalConditionalEvent();

};

