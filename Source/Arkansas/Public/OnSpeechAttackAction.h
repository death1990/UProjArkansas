#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnSpeechAttackAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnSpeechAttackAction : public UEventListener {
    GENERATED_BODY()
public:
    UOnSpeechAttackAction();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSpeechAttackAction();
    
};

