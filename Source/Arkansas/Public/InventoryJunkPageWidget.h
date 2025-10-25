#pragma once
#include "CoreMinimal.h"
#include "InventoryPageWidget.h"
#include "InventoryJunkPageWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UInventoryJunkPageWidget : public UInventoryPageWidget {
    GENERATED_BODY()
public:
    UInventoryJunkPageWidget();

};

