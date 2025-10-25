#include "MainOptionsWidget.h"

UMainOptionsWidget::UMainOptionsWidget() {
    this->StartGameButton = NULL;
    this->MainOptions = NULL;
    this->ContinueButton = NULL;
    this->NewGameButton = NULL;
    this->DebugButtonContainer = NULL;
    this->MenuHotkeyLabel = NULL;
    this->DeliverablesButton = NULL;
    this->ExtrasButton = NULL;
    this->CreditsButton = NULL;
    this->QuitButton = NULL;
    this->SettingsButton = NULL;
    this->LoadSaveButton = NULL;
    this->ChangeProfileButton = NULL;
    this->SettingsMenuClass = NULL;
    this->DifficultySelectClass = NULL;
    this->ExternalInterface = NULL;
    this->SettingsMenuInterface = NULL;
}

void UMainOptionsWidget::OnUnableToLoadMessageClosed() {
}

void UMainOptionsWidget::OnStorageStatusChanged(ESaveGameStorageStatus NewStatus) {
}

void UMainOptionsWidget::OnSettingsMenuClosed() {
}

void UMainOptionsWidget::OnQueryLatestSaveFinished(const FString& LatestSaveName) {
}

void UMainOptionsWidget::OnLoadSaveMenuClosed(bool bForced) {
}

void UMainOptionsWidget::OnLoadComplete(const FString& Filename, ELoadGameResult Result) {
}


