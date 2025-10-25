#include "WBModificationPageWidget.h"

UWBModificationPageWidget::UWBModificationPageWidget() {
    this->ModDialogueClass = NULL;
    this->EquipmentEntryClass = NULL;
    this->ModEntryClass = NULL;
    this->bResetSelectedItemOnModInstall = false;
    this->bResetSelectedModOnModInstall = false;
    this->bHideItemsAlreadyInstalled = true;
    this->bCanAlwaysOpenCraftingScreen = true;
    this->bPopulateModsFromRecipes = true;
    this->bAlwaysSortOnItemAdd = true;
    this->MaxEntriesPerFrame = 10;
    this->ArmorerPerkIcon = NULL;
    this->FillerString = TEXT("\n\n");
    this->bFilterModsOnEquipmentHover = true;
    this->bSortNewEquipmentToTop = true;
    this->bSortEquipmentWithNewModsToTop = true;
    this->bNewModsTakePriorityOverEquipment = false;
    this->CategoryNavigationBar = NULL;
    this->SubcatSwitcher = NULL;
    this->WeaponTypeNavBar = NULL;
    this->ArmorTypeNavBar = NULL;
    this->EquipmentEntryPanel = NULL;
    this->EquipmentEntryScrollBox = NULL;
    this->NoEquipmentDisplay = NULL;
    this->ModEntryPanel = NULL;
    this->ModEntryScrollBox = NULL;
    this->NoModsDisplay = NULL;
    this->SelectModAnim = NULL;
    this->SelectModInstructionDisplay = NULL;
    this->SelectedItemPanel = NULL;
    this->ItemNameTextBlock = NULL;
    this->SelectedModPanel = NULL;
    this->SelectedModTextBlock = NULL;
    this->StaticTooltip = NULL;
    this->PreviousEquipmentWidget = NULL;
    this->SelectedEquipmentWidget = NULL;
    this->PreviousModWidget = NULL;
    this->SelectedModWidget = NULL;
}

void UWBModificationPageWidget::SendFocusToMods_BP() {
}

void UWBModificationPageWidget::SendFocusToEquipment_BP() {
}

void UWBModificationPageWidget::ResetFilters() {
}

void UWBModificationPageWidget::OnItemCountChanged(UInventoryComponent* InventoryComponentIn, const FItemStack& ItemStackIn) {
}

void UWBModificationPageWidget::OnItemAdded(UInventoryComponent* InInventoryComponentIn, const FItemStack& ItemStackIn) {
}





