#pragma once
#include "CoreMinimal.h"
#include "EArmorModSlot.h"
#include "EModSlot.h"
#include "IndianaUserWidget.h"
#include "EquipmentModsWidget.generated.h"

class UPanelWidget;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UEquipmentModsWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EArmorModSlot, UTexture2D*> ArmorModImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EModSlot, UTexture2D*> WeaponModImages;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* EquipmentModPanel;
    
public:
    UEquipmentModsWidget();

};

