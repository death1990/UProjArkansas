#pragma once
#include "CoreMinimal.h"
#include "ETerminalLockState.h"
#include "InteractionScriptEvent.h"
#include "SetTerminalState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API USetTerminalState : public UInteractionScriptEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETerminalLockState DesiredState;
    
    USetTerminalState();

};

