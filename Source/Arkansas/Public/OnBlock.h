#pragma once
#include "CoreMinimal.h"
#include "EBlockEventType.h"
#include "EventListener.h"
#include "OnBlock.generated.h"

class AActor;
class AIndianaCharacter;

UCLASS(Blueprintable, EditInlineNew)
class UOnBlock : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlockEventType BlockEventType;
    
public:
    UOnBlock();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPerfectBlockEvent(AActor* Blocker, AIndianaCharacter* Attacker) const;
    
    UFUNCTION(BlueprintCallable)
    void OnBlockHitEvent(AActor* Blocker, AActor* Attacker, bool bIsMeleeHit);
    
    UFUNCTION(BlueprintCallable)
    void OnBlockEvent(AActor* Blocker, bool bSkipAnimation);
    
};

