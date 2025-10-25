#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnPlayerHackAutomech.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnPlayerHackAutomech : public UEventListener {
    GENERATED_BODY()
public:
    UOnPlayerHackAutomech();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerHackAutomech() const;
    
};

