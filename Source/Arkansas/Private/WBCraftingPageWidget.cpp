#include "WBCraftingPageWidget.h"

UWBCraftingPageWidget::UWBCraftingPageWidget() {
    this->bSubFilterConsumableCategory = true;
    this->bSubFilterWeaponCategory = true;
    this->bSubFilterArmorCategory = true;
    this->DefaultCategoryIndex = 0;
    this->CraftingEntryClass = NULL;
    this->bAllowCraftingFromItemViewerScreen = false;
    this->bRequireHasItemForModificationHotkey = true;
    this->bResetFocusAfterItemBecomesUncraftable = false;
    this->MaxCraftsToRelocatePerFrame = 20;
    this->bShowCraftCommandWhenCraftingBlocked = true;
    this->CategoryNavigationBar = NULL;
    this->ConsumableNavigationBar = NULL;
    this->WeaponNavigationBar = NULL;
    this->ArmorNavigationBar = NULL;
    this->SortLabel = NULL;
    this->ChangeSortLabel = NULL;
    this->DefaultSortingType = ERecipeSorting::Alphabetical;
    this->EntryScrollBox = NULL;
    this->FavoritesPanel = NULL;
    this->FavoriteEntries = NULL;
    this->ValidEntriesVBox = NULL;
    this->InvalidEntriesVBox = NULL;
    this->InvisibleButton = NULL;
    this->ItemDisplayPanel = NULL;
    this->ItemDisplayCraftCountText = NULL;
    this->CraftCommandBorder = NULL;
    this->CraftCommandCraftCountText = NULL;
    this->PerkInfoWithBar = NULL;
    this->CraftingContainer = NULL;
    this->NoAvailableRecipesTextBlock = NULL;
    this->PassTexture = NULL;
    this->FailTexture = NULL;
    this->CraftingRecipePanel = NULL;
    this->CraftedItemRender = NULL;
    this->bKeepTooltipAndRenderOpen = false;
    this->InputLabelGroup = NULL;
    this->OnCannotCraftAnim = NULL;
    this->OnCraftSuccessAnim = NULL;
    this->bResetConsumableNavBarToZero = false;
    this->bResetWeaponNavBarToZero = false;
    this->bResetArmorNavBarToZero = false;
}

void UWBCraftingPageWidget::UpdateArmorerProgress(int32 CurrentDTBonus, float ProgressToNextDTBonus) {
}

void UWBCraftingPageWidget::UpdateArmorerPreview(int32 PotentialDTBonus, float PotentialProgressToNextDTBonus) {
}









