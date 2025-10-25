#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnPerfectDodge.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UOnPerfectDodge : public UEventListener {
    GENERATED_BODY()
public:
    UOnPerfectDodge();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPerfectDodge(AActor* Dodger, AActor* Attacker);
    
};

