#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnModInstalledListener.generated.h"

class UCharacterInventoryComponent;

UCLASS(Blueprintable, EditInlineNew)
class UOnModInstalledListener : public UEventListener {
    GENERATED_BODY()
public:
    UOnModInstalledListener();

protected:
    UFUNCTION(BlueprintCallable)
    void OnModInstalled(UCharacterInventoryComponent* CIC);
    
};

