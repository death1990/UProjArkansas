#include "PauseMenuWidget.h"

UPauseMenuWidget::UPauseMenuWidget() {
    this->CachedSettingsMenuWidget = NULL;
    this->OptionsVerticalBox = NULL;
    this->ResumeButton = NULL;
    this->DebugButton = NULL;
    this->CharacterLoaderButton = NULL;
    this->SaveGameButton = NULL;
    this->LoadGameButton = NULL;
    this->MainMenuButton = NULL;
    this->SettingsButton = NULL;
    this->IdleCamButton = NULL;
    this->QuitButton = NULL;
    this->VersionTextBlock = NULL;
    this->VisLogTextBlock = NULL;
    this->IdleCamButtonText = NULL;
    this->SettingsMenuClass = NULL;
}

void UPauseMenuWidget::OnStartedCalibratingHDR() {
}

void UPauseMenuWidget::OnSettingsMenuClosed() {
}

void UPauseMenuWidget::OnSaveLoadMenuClosed(bool bForced) {
}

void UPauseMenuWidget::OnSaveGameComplete(ESaveGameResult SaveResult, ESaveGameType SaveType) {
}

void UPauseMenuWidget::OnInputBack() {
}

void UPauseMenuWidget::OnFinishedCalibratingHDR() {
}


