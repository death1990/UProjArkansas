#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnWeaponSwapped.generated.h"

class UEquipmentComponent;

UCLASS(Blueprintable, EditInlineNew)
class UOnWeaponSwapped : public UEventListener {
    GENERATED_BODY()
public:
    UOnWeaponSwapped();

protected:
    UFUNCTION(BlueprintCallable)
    void OnWeaponSwapped(const UEquipmentComponent* InEquipmentComponent) const;
    
};

