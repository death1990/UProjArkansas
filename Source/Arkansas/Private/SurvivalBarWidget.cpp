#include "SurvivalBarWidget.h"

USurvivalBarWidget::USurvivalBarWidget() {
    this->SurvivalMode = ESurvivalBar::Invalid;
    this->SurvivalIcon = NULL;
    this->SurvivalProgressBar = NULL;
}

void USurvivalBarWidget::OnDifficultyChanged(EGameDifficulty DifficultyIn) {
}


