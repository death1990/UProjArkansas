#pragma once
#include "CoreMinimal.h"
#include "EArmorSlot.h"
#include "IndianaUserWidget.h"
#include "ItemDegradationAlertWidget.generated.h"

class UInvalidationBox;
class UItemDegradationEntryWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UItemDegradationAlertWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInvalidationBox* MainInvalidationBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemDegradationEntryWidget* WeaponEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemDegradationEntryWidget* HeadEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemDegradationEntryWidget* BodyEntry;
    
public:
    UItemDegradationAlertWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnUnequippedArmor(EArmorSlot ArmorSlotIn);
    
    UFUNCTION(BlueprintCallable)
    void OnHUDVisibilityChanged(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void OnEquipmentRepairVisibilityChanged(bool bVisible);
    
};

