#include "SurvivalBarGroupWidget.h"

USurvivalBarGroupWidget::USurvivalBarGroupWidget() {
    this->HungerBar = NULL;
    this->ThirstBar = NULL;
    this->SleepBar = NULL;
}

void USurvivalBarGroupWidget::OnSubSurvivalBarUpdated() {
}

void USurvivalBarGroupWidget::OnDifficultyChanged(EGameDifficulty NewDifficulty) {
}


