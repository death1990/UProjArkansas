#include "ReputationSummaryWidget.h"

UReputationSummaryWidget::UReputationSummaryWidget() {
    this->EntryClass = NULL;
    this->FactionsContainer = NULL;
    this->Details = NULL;
    this->InputLabelGroup = NULL;
    this->FlavorTextWidget = NULL;
    this->ButtonGroup = NULL;
}

void UReputationSummaryWidget::OnFactionEncountered(const UFactionData* FactionData) {
}

void UReputationSummaryWidget::InitReputationBackgroundOnMaximize() {
}


