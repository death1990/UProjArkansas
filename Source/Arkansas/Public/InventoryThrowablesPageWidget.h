#pragma once
#include "CoreMinimal.h"
#include "InventoryPageWidget.h"
#include "ItemStack.h"
#include "Templates/SubclassOf.h"
#include "InventoryThrowablesPageWidget.generated.h"

class UDragContainerWidget;
class UImage;
class UInventoryComponent;
class UItemViewerButtonWidget;
class UItemViewerItemWidget;
class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UInventoryThrowablesPageWidget : public UInventoryPageWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* FocusLockBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemViewerButtonWidget* ThrowableButton0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemViewerButtonWidget* ThrowableButton1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemViewerButtonWidget* ThrowableButton2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemViewerButtonWidget* ThrowableButton3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDragContainerWidget* DragContainer0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDragContainerWidget* DragContainer1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDragContainerWidget* DragContainer2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDragContainerWidget* DragContainer3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* UnavailableImage0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* UnavailableImage1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* UnavailableImage2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* UnavailableImage3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemViewerItemWidget> WidgetClass;
    
public:
    UInventoryThrowablesPageWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnItemCountChanged(UInventoryComponent* InventoryComponent, const FItemStack& ItemStack);
    
};

