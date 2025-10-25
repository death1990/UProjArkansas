#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnCombatStateChange.generated.h"

class AIndianaCharacter;

UCLASS(Blueprintable, EditInlineNew)
class UOnCombatStateChange : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasLivingEnemies;
    
public:
    UOnCombatStateChange();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCombatStateChange(AIndianaCharacter* InCharacter, bool bInCombat, bool bRestoring);
    
};

