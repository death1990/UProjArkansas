#include "StatsPerksPageWidget.h"
#include "Templates/SubclassOf.h"

UStatsPerksPageWidget::UStatsPerksPageWidget() {
    this->PerkEntryWidgetClass = NULL;
    this->bShouldSortAcquiredPerks = true;
    this->DescriptionPanel = NULL;
    this->PerkTotalTextBlock = NULL;
    this->PerkTotalValueTextBlock = NULL;
    this->PlayerPerkList = NULL;
    this->ScrollingPerksListWidget = NULL;
    this->InputLabelGroup = NULL;
    this->PurchasedPerksList = NULL;
    this->PurchasedPerksPanel = NULL;
    this->AdditionalPerksList = NULL;
    this->AdditionalPerksPanel = NULL;
    this->PurchasedCount = NULL;
    this->AdditionalCount = NULL;
    this->PointsAvailable = NULL;
}

void UStatsPerksPageWidget::UnfavoritePerk() {
}

void UStatsPerksPageWidget::ResetPendingPerks(UCharacterInfoComponent* CharacterInfoComponent) {
}

void UStatsPerksPageWidget::RemovePendingPerk(UCharacterInfoComponent* CharacterInfoComponent, const TSubclassOf<UPerk>& Perk) {
}

void UStatsPerksPageWidget::OnRevertAllocationsClicked() {
}

void UStatsPerksPageWidget::OnPerkUnhoveredUnfocused(TSubclassOf<UPerk> Perk) {
}

void UStatsPerksPageWidget::OnPerkSelected(UScrollingPerksListEntry* ScrollingPerkEntry) {
}

void UStatsPerksPageWidget::OnPerkHoveredFocused(TSubclassOf<UPerk> Perk) {
}

void UStatsPerksPageWidget::OnInputBack() {
}

void UStatsPerksPageWidget::OnDeallocation() {
}

void UStatsPerksPageWidget::OnAllocation() {
}

void UStatsPerksPageWidget::OnAcceptAllocations() {
}

void UStatsPerksPageWidget::FocusOnLastAttentionPerk() {
}

void UStatsPerksPageWidget::FavoritePerk() {
}

void UStatsPerksPageWidget::AddPendingPerk(UCharacterInfoComponent* CharacterInfoComponent, const TSubclassOf<UPerk>& Perk) {
}


