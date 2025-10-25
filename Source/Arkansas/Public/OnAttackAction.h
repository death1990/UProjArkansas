#pragma once
#include "CoreMinimal.h"
#include "EAttackActionEventType.h"
#include "EFireMode.h"
#include "EMeleeAction.h"
#include "EventListener.h"
#include "OnAttackAction.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UOnAttackAction : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackActionEventType EventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeleeAction MeleeAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFireMode FireMode;
    
public:
    UOnAttackAction();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMeleeAction(AActor* Attacker, EMeleeAction ActionStarted) const;
    
    UFUNCTION(BlueprintCallable)
    void OnAttackComplete(AActor* Attacker, int32 AttackID, bool bIsQuickMelee);
    
};

