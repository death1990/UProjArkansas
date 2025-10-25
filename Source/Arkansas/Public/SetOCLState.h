#pragma once
#include "CoreMinimal.h"
#include "EOCLState.h"
#include "InteractionScriptEvent.h"
#include "SetOCLState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API USetOCLState : public UInteractionScriptEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOCLState DesiredState;
    
    USetOCLState();

};

