#pragma once
#include "CoreMinimal.h"
#include "InteractionArrayEvent.h"
#include "InteractionMultiEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UInteractionMultiEvent : public UInteractionArrayEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnforceInteractOrder;
    
public:
    UInteractionMultiEvent();

};

