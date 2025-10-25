#include "PlayerStatsWidget.h"

UPlayerStatsWidget::UPlayerStatsWidget() {
    this->CurrencyValueTextBlock = NULL;
    this->NameTextBlock = NULL;
    this->LevelTextBlock = NULL;
}


void UPlayerStatsWidget::OnLevelChanged(UCharacterInfoComponent* InCharacterInfoComponent, int32 NewLevel) {
}


