#include "PlayerStatsDisplayWidget.h"

UPlayerStatsDisplayWidget::UPlayerStatsDisplayWidget() {
    this->bShowCrashText = true;
    this->CharacterOverview = NULL;
    this->MedInhalerWidget = NULL;
    this->StatusEffectOverview = NULL;
}

void UPlayerStatsDisplayWidget::OnWidgetResetEventTimer() {
}


