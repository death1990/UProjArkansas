#include "SystemMapSelectionEntryWidget.h"

USystemMapSelectionEntryWidget::USystemMapSelectionEntryWidget() {
    this->InactiveBeaconOpacity = 0.50f;
    this->EntryButton = NULL;
    this->EntryTextBlock = NULL;
    this->ObjectiveIcon = NULL;
    this->DestinationImage = NULL;
}

void USystemMapSelectionEntryWidget::OnEntryUnhoveredUnfocused() {
}

void USystemMapSelectionEntryWidget::OnEntryHoveredFocused() {
}


