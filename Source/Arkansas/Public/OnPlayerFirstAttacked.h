#pragma once
#include "CoreMinimal.h"
#include "FactionListener.h"
#include "OnPlayerFirstAttacked.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UOnPlayerFirstAttacked : public UFactionListener {
    GENERATED_BODY()
public:
    UOnPlayerFirstAttacked();

protected:
    UFUNCTION(BlueprintCallable)
    void OnFirstAttacked(AActor* Attacker);
    
};

