#include "StatsSummaryPageWidget.h"

UStatsSummaryPageWidget::UStatsSummaryPageWidget() {
    this->bHideZyraniumOnZero = false;
    this->FlavorTextWidget = NULL;
    this->InputLabelGroup = NULL;
    this->AptitudeSummary = NULL;
    this->CharacterStatSummary = NULL;
    this->DescriptionPanel = NULL;
}

void UStatsSummaryPageWidget::OnStatusEffectItemHoveredFocused(const UStatusEffectEntryWidget* StatusEffectItem) {
}

void UStatsSummaryPageWidget::OnStatItemHoveredFocused(UGenericListEntryWidget* StatItem) {
}

void UStatsSummaryPageWidget::OnAptitudeHoveredFocused() {
}


