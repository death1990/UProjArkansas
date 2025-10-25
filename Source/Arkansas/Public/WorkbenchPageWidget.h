#pragma once
#include "CoreMinimal.h"
#include "BaseInventoryItemManagement.h"
#include "ItemStack.h"
#include "WorkbenchPageWidget.generated.h"

class UFlavorTextWidget;
class UInputLabelGroupWidget;
class UInventoryComponent;

UCLASS(Blueprintable, EditInlineNew)
class UWorkbenchPageWidget : public UBaseInventoryItemManagement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputLabelGroupWidget* InputLabelGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFlavorTextWidget* FlavorTextWidget;
    
public:
    UWorkbenchPageWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnItemRemoved(UInventoryComponent* InInventoryComponent, const FItemStack& ItemStack);
    
};

