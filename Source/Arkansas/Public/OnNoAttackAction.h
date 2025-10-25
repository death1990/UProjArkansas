#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnNoAttackAction.generated.h"

class AIndianaCharacter;

UCLASS(Blueprintable, EditInlineNew)
class UOnNoAttackAction : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeRequiredDuration;
    
public:
    UOnNoAttackAction();

protected:
    UFUNCTION(BlueprintCallable)
    void RemoveNoAttackActionTimer(AIndianaCharacter* Character, bool bRestartTimer);
    
    UFUNCTION(BlueprintCallable)
    void OnNoAttackAction(AIndianaCharacter* Attacker);
    
};

