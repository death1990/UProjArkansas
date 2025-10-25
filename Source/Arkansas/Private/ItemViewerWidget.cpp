#include "ItemViewerWidget.h"

UItemViewerWidget::UItemViewerWidget() {
    this->bEnableFiltering = false;
    this->bSkipFilterOnEmptyItems = false;
    this->bReSortAfterFilter = true;
    this->bApplyActiveFilterOnSort = true;
    this->bSortEquippedItemsToTop = false;
    this->bSortFavoriteItemsToTop = false;
    this->bHideItemsAlreadyInstalled = true;
    this->bUseTooltip = true;
    this->bDragAttentionBroadcastsHover = false;
    this->bAutoCollapse = true;
    this->bDontAffectPlayerInventory = false;
    this->bDisplayValue = false;
    this->SortingContainerOffset = 0.00f;
    this->PageClass = NULL;
    this->Columns = 6;
    this->CategoryPadding = 30;
    this->PagePadding = 20;
    this->bShouldDisplaySortingOptions = false;
    this->bClearDelegatesOnInitialization = true;
    this->bShowAllCategory = false;
    this->bUseAllCategoryWithFilters = false;
    this->bAllowJunkInAll = false;
    this->bOnlyShowJunkInJunk = false;
    this->bAutoPad = true;
    this->bShowJunkCategory = true;
    this->bSortJunkedItemsToTopInJunk = false;
    this->ItemGenericClass = NULL;
    this->RootSizeBox = NULL;
    this->PageTextBlock = NULL;
    this->ScrollBox = NULL;
    this->PagesHorizontalBox = NULL;
    this->ScrollSelector = NULL;
    this->PageSliderWidget = NULL;
    this->SortLabel = NULL;
    this->ChangeSortLabel = NULL;
    this->SortingContainer = NULL;
    this->FilterCycleButton = NULL;
    this->PageInfoPanel = NULL;
    this->ScrollTime = 1.00f;
    this->ScrollType = EScrollEaseType::EaseIn;
    this->SelectedItemWidget = NULL;
    this->ItemViewerPage = NULL;
}

void UItemViewerWidget::OnScrollingComplete() {
}

void UItemViewerWidget::OnPageSliderChanged(const FSliderEvent& Event) {
}

void UItemViewerWidget::OnFilterOptionChanged(int32 FilterIndexChange) {
}


