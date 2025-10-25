#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnPlayerDisarmMine.generated.h"

class AActor;
class AIndianaCharacter;

UCLASS(Blueprintable, EditInlineNew)
class UOnPlayerDisarmMine : public UEventListener {
    GENERATED_BODY()
public:
    UOnPlayerDisarmMine();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerDisarmMine(AIndianaCharacter* Character, AActor* DisarmedMine);
    
};

