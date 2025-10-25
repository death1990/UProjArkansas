#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnLevelChangedGetLevelListener.generated.h"

class UCharacterInfoComponent;

UCLASS(Blueprintable, EditInlineNew)
class UOnLevelChangedGetLevelListener : public UEventListener {
    GENERATED_BODY()
public:
    UOnLevelChangedGetLevelListener();

protected:
    UFUNCTION(BlueprintCallable)
    void OnLevelChangedTo(UCharacterInfoComponent* InCharacterInfoComponent, int32 Level);
    
};

