#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "Templates/SubclassOf.h"
#include "OnLastAmmoInInventory.generated.h"

class UAmmo;

UCLASS(Blueprintable, EditInlineNew)
class UOnLastAmmoInInventory : public UEventListener {
    GENERATED_BODY()
public:
    UOnLastAmmoInInventory();

protected:
    UFUNCTION(BlueprintCallable)
    void OnLastAmmoInInventory(TSubclassOf<UAmmo> AmmoType);
    
};

