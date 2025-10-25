#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnCompanionKilled.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UOnCompanionKilled : public UEventListener {
    GENERATED_BODY()
public:
    UOnCompanionKilled();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCompanionKilled(AActor* Companion);
    
};

