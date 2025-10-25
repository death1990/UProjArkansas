#pragma once
#include "CoreMinimal.h"
#include "Corpse.h"
#include "FrozenCorpse.generated.h"

UCLASS(Blueprintable)
class AFrozenCorpse : public ACorpse {
    GENERATED_BODY()
public:
    AFrozenCorpse(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Unfreeze();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameStateRestored(bool bIsFrozen);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCorpseFrozen();
    
};

