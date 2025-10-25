#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "InventoryItemSlotWidget.generated.h"

class UItemViewerButtonWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UInventoryItemSlotWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemViewerButtonWidget* Button;
    
    UInventoryItemSlotWidget();

};

