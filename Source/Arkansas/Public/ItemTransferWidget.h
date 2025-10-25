#pragma once
#include "CoreMinimal.h"
#include "EIndianaUIColorType.h"
#include "IndianaInterfaceUserWidget.h"
#include "ItemStack.h"
#include "Templates/SubclassOf.h"
#include "ItemTransferWidget.generated.h"

class UImage;
class UInputLabelGroupWidget;
class UInventoryComponent;
class UItemToolTipWidget;
class UItemViewerNavigationWidget;
class UItemViewerWidget;
class UPanelWidget;
class UPlayerStatsWidget;
class UStackSplittingWidget;
class UTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UItemTransferWidget : public UIndianaInterfaceUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStackSplittingWidget> StackSplittingClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIndianaUIColorType HeaderDeselectColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIndianaUIColorType HeaderSelectColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerStatsWidget* PlayerStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* InventoryHeaderTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* PlayerHeaderTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputLabelGroupWidget* LabelGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemViewerNavigationWidget* ViewerNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemViewerWidget* PlayerViewer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* NewPlayerHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* PlayerHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemViewerWidget* InventoryViewer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* NewInventoryHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* InventoryHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemToolTipWidget* StaticTooltip;
    
public:
    UItemTransferWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerItemRemoved(UInventoryComponent* InventoryComponent, const FItemStack& Item);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerItemAdded(UInventoryComponent* InventoryComponent, const FItemStack& Item);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerCountChanged(UInventoryComponent* InventoryComponent, const FItemStack& ItemStack);
    
    UFUNCTION(BlueprintCallable)
    void OnItemViewerSortingChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnItemCountChanged(UInventoryComponent* InventoryComponent, const FItemStack& ItemStack);
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryItemRemoved(UInventoryComponent* InventoryComponent, const FItemStack& Item);
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryItemAdded(UInventoryComponent* InventoryComponent, const FItemStack& Item);
    
};

