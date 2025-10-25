#pragma once
#include "CoreMinimal.h"
#include "Gadget.h"
#include "GadgetTTD.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UGadgetTTD : public UGadget {
    GENERATED_BODY()
public:
    UGadgetTTD();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTacticalTimeDilationSuppressed();
    
};

