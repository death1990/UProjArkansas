#include "SaveLoadDetailWidget.h"

USaveLoadDetailWidget::USaveLoadDetailWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Button = NULL;
    this->SaveScreenshot = NULL;
    this->InvalidSave = NULL;
    this->SaveTypeText = NULL;
    this->CharacterNameText = NULL;
    this->PlayerLevelText = NULL;
    this->CurrentQuestText = NULL;
    this->DifficultyText = NULL;
    this->SaveDateText = NULL;
    this->PlaytimeText = NULL;
}


