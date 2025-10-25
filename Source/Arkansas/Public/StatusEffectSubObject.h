#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "StatusEffectSubObject.generated.h"

class AActor;

UCLASS(Blueprintable, DefaultToInstanced)
class ARKANSAS_API UStatusEffectSubObject : public UObject {
    GENERATED_BODY()
public:
    UStatusEffectSubObject();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveClearEffect(AActor* Target, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveApplyEffect(AActor* Target, AActor* Instigator);
    
};

