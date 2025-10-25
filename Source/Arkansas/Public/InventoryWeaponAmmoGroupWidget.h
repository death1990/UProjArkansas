#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "IndianaUserWidget.h"
#include "Templates/SubclassOf.h"
#include "InventoryWeaponAmmoGroupWidget.generated.h"

class UAmmo;
class UInventoryWeaponAmmoWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UInventoryWeaponAmmoGroupWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString AmmoName0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryWeaponAmmoWidget* Ammo0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAmmo> RelatedAmmoClass;
    
public:
    UInventoryWeaponAmmoGroupWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHighlightChange(bool bHighlight);
    
};

