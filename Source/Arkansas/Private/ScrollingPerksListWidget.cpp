#include "ScrollingPerksListWidget.h"
#include "Templates/SubclassOf.h"

UScrollingPerksListWidget::UScrollingPerksListWidget() {
    this->PerkEntryWidgetClass = NULL;
    this->DefaultSortingType = EPerkSorting::Alphabetical;
    this->bShouldSortFavoritePerks = true;
    this->bShouldSortAvailablePerks = true;
    this->bShouldSortUnavailablePerks = true;
    this->MaxPerksToRelocatePerFrame = 5;
    this->LastAttentionPerkEntry = NULL;
    this->PerksScrollBox = NULL;
    this->FavoriteDisplayPanel = NULL;
    this->FavoritePerks = NULL;
    this->AvailablePerks = NULL;
    this->UnavailablePerks = NULL;
    this->SortDirectionImage = NULL;
    this->SortLabel = NULL;
    this->ChangeSortLabel = NULL;
    this->FavoriteCount = NULL;
    this->AvailableCount = NULL;
    this->UnavailableCount = NULL;
}

void UScrollingPerksListWidget::HandleOnPerkTransaction(UScrollingPerksListEntry* TransactingPerkEntry, bool bIsPending, bool bIsAcquired) {
}

void UScrollingPerksListWidget::HandleOnPerkClicked(UScrollingPerksListEntry* ClickedPerkEntry) {
}

void UScrollingPerksListWidget::HandleOnPerkAuxClicked(UScrollingPerksListEntry* ClickedPerkEntry) {
}

void UScrollingPerksListWidget::HandleOnPerkAttentionLost(TSubclassOf<UPerk> LastPerkClass) {
}

void UScrollingPerksListWidget::HandleOnPerkAttention(UScrollingPerksListEntry* AttentionPerkEntry) {
}


