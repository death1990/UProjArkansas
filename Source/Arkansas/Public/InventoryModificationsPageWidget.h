#pragma once
#include "CoreMinimal.h"
#include "InventoryPageWidget.h"
#include "InventoryModificationsPageWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UInventoryModificationsPageWidget : public UInventoryPageWidget {
    GENERATED_BODY()
public:
    UInventoryModificationsPageWidget();

};

