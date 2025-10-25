#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnLastAmmoInClip.generated.h"

class UWeapon;

UCLASS(Blueprintable, EditInlineNew)
class UOnLastAmmoInClip : public UEventListener {
    GENERATED_BODY()
public:
    UOnLastAmmoInClip();

protected:
    UFUNCTION(BlueprintCallable)
    void OnLastAmmoInClip(UWeapon* Weapon);
    
};

