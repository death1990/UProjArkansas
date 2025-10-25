#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnProfligateSpenderTrigger.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnProfligateSpenderTrigger : public UEventListener {
    GENERATED_BODY()
public:
    UOnProfligateSpenderTrigger();

protected:
    UFUNCTION(BlueprintCallable)
    void OnProfligateSpenderTrigger(int32 BitsReceived);
    
};

