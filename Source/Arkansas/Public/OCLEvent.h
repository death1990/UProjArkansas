#pragma once
#include "CoreMinimal.h"
#include "EOCLState.h"
#include "InteractionGateEvent.h"
#include "OCLEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UOCLEvent : public UInteractionGateEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOCLState StateOnInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceRpgRequirementsNotPassed;
    
public:
    UOCLEvent();

};

