#pragma once
#include "CoreMinimal.h"
#include "EArmorSlot.h"
#include "InventoryPageWidget.h"
#include "InventoryArmorPageWidget.generated.h"

class UBorder;
class UDragContainerWidget;
class UItemViewerButtonWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UInventoryArmorPageWidget : public UInventoryPageWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayEquippedItems;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDragContainerWidget* DragContainer0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDragContainerWidget* DragContainer1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemViewerButtonWidget* Button0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemViewerButtonWidget* Button1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* EquipmentBorder;
    
public:
    UInventoryArmorPageWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SetEquippedArmorSlot(EArmorSlot ArmorSlotIn);
    
};

