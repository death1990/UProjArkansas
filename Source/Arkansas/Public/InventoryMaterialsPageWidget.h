#pragma once
#include "CoreMinimal.h"
#include "InventoryPageWidget.h"
#include "InventoryMaterialsPageWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UInventoryMaterialsPageWidget : public UInventoryPageWidget {
    GENERATED_BODY()
public:
    UInventoryMaterialsPageWidget();

};

