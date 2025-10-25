#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnPlayerLockPick.generated.h"

class AActor;
class AIndianaCharacter;

UCLASS(Blueprintable, EditInlineNew)
class UOnPlayerLockPick : public UEventListener {
    GENERATED_BODY()
public:
    UOnPlayerLockPick();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerLockPick(AIndianaCharacter* Character, AActor* LockpickedActor);
    
};

