#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnCompanionDowned.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UOnCompanionDowned : public UEventListener {
    GENERATED_BODY()
public:
    UOnCompanionDowned();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCompanionDowned(AActor* Companion);
    
};

