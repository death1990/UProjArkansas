#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnMadScientistKill.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnMadScientistKill : public UEventListener {
    GENERATED_BODY()
public:
    UOnMadScientistKill();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMadScientistKill();
    
};

