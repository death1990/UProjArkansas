#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EUINavigation -FallbackName=EUINavigation
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "BaseInventoryItemManagement.h"
#include "EUnlockAbility.h"
#include "ItemStack.h"
#include "Templates/SubclassOf.h"
#include "InventoryWidget.generated.h"

class UActorRenderWidget;
class UEquipmentComponent;
class UHeaderFlavorTextWidget;
class UIndianaDragDropOperation;
class UIndianaUserWidget;
class UInputLabelGroupWidget;
class UInventoryComponent;
class UInventoryConsumablesPageWidget;
class UInventoryEquipmentPageWidget;
class UInventoryItemWidget;
class UInventoryJunkPageWidget;
class UInventoryModificationsPageWidget;
class UInventoryNourishmentPageWidget;
class UInventoryPageWidget;
class UInventoryThrowablesPageWidget;
class UItemToolTipWidget;
class UPanelWidget;
class UStackSplittingWidget;
class UTexture2D;
class UWeapon;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UInventoryWidget : public UBaseInventoryItemManagement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* UnequipIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* EquipIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* UnloadIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SwapIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DropIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CompareIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* StopCompareIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* UseIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* JunkIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* NotJunkIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* InspectIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStackSplittingWidget> StackSplittingClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyCompareToSwapItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideComparisonTooltipForMatchingItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSortAfterSwap;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInventoryItemWidget* PendingSwapItemWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowItemInspectorWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanFavoriteEquippedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllItemFavoriting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowEquippedItemFavorite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowCollectibleItemFavorite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockJunkForFavorites;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowDragSwapInItemViewer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePreviewAsDefaultOnMKB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepPreviewActiveOnMKB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArmorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HelmetIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin PositionRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin PositionLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryEquipmentPageWidget* WeaponsAndArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryThrowablesPageWidget* Throwables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryNourishmentPageWidget* FoodAndDrink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryConsumablesPageWidget* InhalerAndGadgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryModificationsPageWidget* ResourcesModsAndMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryPageWidget* CollectibleItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryPageWidget* QuestItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryJunkPageWidget* Junk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputLabelGroupWidget* InputLabelGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* TooltipContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemToolTipWidget* ComparisonTooltip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemToolTipWidget* StaticTooltip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHeaderFlavorTextWidget* HeaderFlavorTextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorRenderWidget* ItemRenderer;
    
public:
    UInventoryWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetFocusToActivePage(EUINavigation NavigationDirection) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWeaponStartEquip(UWeapon* Weapon);
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponEndEquip(UEquipmentComponent* EquipmentComponentIn, UWeapon* Weapon);
    
    UFUNCTION(BlueprintCallable)
    void OnScrollingPageChangeStart(UIndianaUserWidget* UserWidget, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnScrollingPageChangeComplete(UIndianaUserWidget* UserWidget, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnItemViewerPreSortingChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnItemRemoved(UInventoryComponent* InInventoryComponent, const FItemStack& ItemStack);
    
    UFUNCTION(BlueprintCallable)
    void OnItemJunkStatusChanged(UInventoryComponent* InInventoryComponent, const FItemStack& ItemStack);
    
    UFUNCTION(BlueprintCallable)
    void OnItemCountChanged(UInventoryComponent* InInventoryComponent, const FItemStack& ItemStack);
    
    UFUNCTION(BlueprintCallable)
    void OnItemAdded(UInventoryComponent* InInventoryComponent, const FItemStack& ItemStack);
    
    UFUNCTION(BlueprintCallable)
    void OnDragDrop_SwapWeaponSlot(UIndianaDragDropOperation* Operation);
    
    UFUNCTION(BlueprintCallable)
    void OnDragDrop_SwapThrowableSlot(UIndianaDragDropOperation* Operation);
    
    UFUNCTION(BlueprintCallable)
    void OnDragDrop_SwapDrugSlot(UIndianaDragDropOperation* Operation);
    
    UFUNCTION(BlueprintCallable)
    void OnDragDrop_SetWeaponSlot(UIndianaDragDropOperation* Operation);
    
    UFUNCTION(BlueprintCallable)
    void OnDragDrop_ItemViewerInternalSwap(UIndianaDragDropOperation* Operation);
    
    UFUNCTION(BlueprintCallable)
    void OnDragDrop_ItemViewerArmorSwap(UIndianaDragDropOperation* Operation);
    
    UFUNCTION(BlueprintCallable)
    void OnDragDrop_ClearThrowableSlot(UIndianaDragDropOperation* Operation);
    
    UFUNCTION(BlueprintCallable)
    void OnDragDrop_ClearDrugSlot(UIndianaDragDropOperation* Operation);
    
    UFUNCTION(BlueprintCallable)
    void OnDragDrop_AssignThrowableSlot(UIndianaDragDropOperation* Operation);
    
    UFUNCTION(BlueprintCallable)
    void OnDragDrop_AssignDrugSlot(UIndianaDragDropOperation* Operation);
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityUnlocked(EUnlockAbility AbilityChanged);
    
};

