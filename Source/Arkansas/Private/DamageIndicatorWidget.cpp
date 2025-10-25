#include "DamageIndicatorWidget.h"

UDamageIndicatorWidget::UDamageIndicatorWidget() {
    this->EntryClass = NULL;
    this->DamageThresholdData = NULL;
}

void UDamageIndicatorWidget::OnPlayerTakesDamage(const FCauseDamageInfo& DamageInfo) {
}


