#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnPatientNKill.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnPatientNKill : public UEventListener {
    GENERATED_BODY()
public:
    UOnPatientNKill();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPatientNKill();
    
};

