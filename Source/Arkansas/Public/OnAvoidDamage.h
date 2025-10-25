#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnAvoidDamage.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UOnAvoidDamage : public UEventListener {
    GENERATED_BODY()
public:
    UOnAvoidDamage();

protected:
    UFUNCTION(BlueprintCallable)
    void OnDamageAvoided(AActor* Attacker);
    
};

