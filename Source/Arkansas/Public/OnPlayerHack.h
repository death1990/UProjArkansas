#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnPlayerHack.generated.h"

class AActor;
class AIndianaCharacter;

UCLASS(Blueprintable, EditInlineNew)
class UOnPlayerHack : public UEventListener {
    GENERATED_BODY()
public:
    UOnPlayerHack();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerUseHack(AIndianaCharacter* Character, AActor* HackedActor);
    
};

