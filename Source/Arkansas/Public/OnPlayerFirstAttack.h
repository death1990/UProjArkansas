#pragma once
#include "CoreMinimal.h"
#include "FactionListener.h"
#include "OnPlayerFirstAttack.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UOnPlayerFirstAttack : public UFactionListener {
    GENERATED_BODY()
public:
    UOnPlayerFirstAttack();

protected:
    UFUNCTION(BlueprintCallable)
    void OnFirstAttack(AActor* Target);
    
};

