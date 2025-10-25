#include "InventoryWidget.h"

UInventoryWidget::UInventoryWidget() {
    this->UnequipIcon = NULL;
    this->EquipIcon = NULL;
    this->UnloadIcon = NULL;
    this->SwapIcon = NULL;
    this->DropIcon = NULL;
    this->CompareIcon = NULL;
    this->StopCompareIcon = NULL;
    this->UseIcon = NULL;
    this->JunkIcon = NULL;
    this->NotJunkIcon = NULL;
    this->InspectIcon = NULL;
    this->StackSplittingClass = NULL;
    this->bApplyCompareToSwapItem = true;
    this->bHideComparisonTooltipForMatchingItem = true;
    this->bSortAfterSwap = true;
    this->PendingSwapItemWidget = NULL;
    this->bAllowItemInspectorWidget = false;
    this->bCanFavoriteEquippedItems = true;
    this->bAllItemFavoriting = false;
    this->bAllowEquippedItemFavorite = true;
    this->bAllowCollectibleItemFavorite = false;
    this->bBlockJunkForFavorites = false;
    this->bAllowDragSwapInItemViewer = true;
    this->bEnablePreviewAsDefaultOnMKB = true;
    this->bKeepPreviewActiveOnMKB = true;
    this->WeaponIndex = 0;
    this->ArmorIndex = 1;
    this->HelmetIndex = 2;
    this->WeaponsAndArmor = NULL;
    this->Throwables = NULL;
    this->FoodAndDrink = NULL;
    this->InhalerAndGadgets = NULL;
    this->ResourcesModsAndMaterials = NULL;
    this->CollectibleItems = NULL;
    this->QuestItems = NULL;
    this->Junk = NULL;
    this->InputLabelGroup = NULL;
    this->TooltipContainer = NULL;
    this->ComparisonTooltip = NULL;
    this->StaticTooltip = NULL;
    this->HeaderFlavorTextWidget = NULL;
    this->ItemRenderer = NULL;
}

void UInventoryWidget::SetFocusToActivePage(EUINavigation NavigationDirection) const {
}

void UInventoryWidget::OnWeaponStartEquip(UWeapon* Weapon) {
}

void UInventoryWidget::OnWeaponEndEquip(UEquipmentComponent* EquipmentComponentIn, UWeapon* Weapon) {
}

void UInventoryWidget::OnScrollingPageChangeStart(UIndianaUserWidget* UserWidget, int32 Index) {
}

void UInventoryWidget::OnScrollingPageChangeComplete(UIndianaUserWidget* UserWidget, int32 Index) {
}

void UInventoryWidget::OnItemViewerPreSortingChanged() {
}

void UInventoryWidget::OnItemRemoved(UInventoryComponent* InInventoryComponent, const FItemStack& ItemStack) {
}

void UInventoryWidget::OnItemJunkStatusChanged(UInventoryComponent* InInventoryComponent, const FItemStack& ItemStack) {
}

void UInventoryWidget::OnItemCountChanged(UInventoryComponent* InInventoryComponent, const FItemStack& ItemStack) {
}

void UInventoryWidget::OnItemAdded(UInventoryComponent* InInventoryComponent, const FItemStack& ItemStack) {
}

void UInventoryWidget::OnDragDrop_SwapWeaponSlot(UIndianaDragDropOperation* Operation) {
}

void UInventoryWidget::OnDragDrop_SwapThrowableSlot(UIndianaDragDropOperation* Operation) {
}

void UInventoryWidget::OnDragDrop_SwapDrugSlot(UIndianaDragDropOperation* Operation) {
}

void UInventoryWidget::OnDragDrop_SetWeaponSlot(UIndianaDragDropOperation* Operation) {
}

void UInventoryWidget::OnDragDrop_ItemViewerInternalSwap(UIndianaDragDropOperation* Operation) {
}

void UInventoryWidget::OnDragDrop_ItemViewerArmorSwap(UIndianaDragDropOperation* Operation) {
}

void UInventoryWidget::OnDragDrop_ClearThrowableSlot(UIndianaDragDropOperation* Operation) {
}

void UInventoryWidget::OnDragDrop_ClearDrugSlot(UIndianaDragDropOperation* Operation) {
}

void UInventoryWidget::OnDragDrop_AssignThrowableSlot(UIndianaDragDropOperation* Operation) {
}

void UInventoryWidget::OnDragDrop_AssignDrugSlot(UIndianaDragDropOperation* Operation) {
}

void UInventoryWidget::OnAbilityUnlocked(EUnlockAbility AbilityChanged) {
}


