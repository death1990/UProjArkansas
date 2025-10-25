#include "ItemStatsWidget.h"

UItemStatsWidget::UItemStatsWidget() {
    this->StatEntriesToSpawn = 5;
    this->ArmorStatEntriesToSpawn = 5;
    this->bDisplayDelta = true;
    this->bDisplayComparison = true;
    this->bOnlyShowComparisons = false;
    this->bOnlyShowArmorThresholdComparisons = true;
    this->bShowAmmoAsHUD = true;
    this->bHideFormatStats = true;
    this->NotAvailableString = TEXT("N/A");
    this->StatsCategory = NULL;
    this->ArmorStatWidgetClass = NULL;
    this->StatWidgetClass = NULL;
}

void UItemStatsWidget::OnAlternateChanged() {
}


