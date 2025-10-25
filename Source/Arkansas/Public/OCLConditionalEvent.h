#pragma once
#include "CoreMinimal.h"
#include "EOCLState.h"
#include "InteractionEvent.h"
#include "OCLConditionalEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UOCLConditionalEvent : public UInteractionEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EOCLState, UInteractionEvent*> Events;
    
public:
    UOCLConditionalEvent();

};

