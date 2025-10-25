#include "DeathMenuWidget.h"

UDEPRECATED_DeathMenuWidget::UDEPRECATED_DeathMenuWidget() {
    this->CachedSettingsMenuWidget = NULL;
    this->DeathReasonTextBlock = NULL;
    this->OptionsVerticalBox = NULL;
    this->ResurrectButton = NULL;
    this->ContinueButton = NULL;
    this->LoadButton = NULL;
    this->SettingsButton = NULL;
    this->MainMenuButton = NULL;
    this->QuitButton = NULL;
    this->SettingsMenuClass = NULL;
    this->SaveLoadClass = NULL;
}

void UDEPRECATED_DeathMenuWidget::OnStartedCalibratingHDR() {
}

void UDEPRECATED_DeathMenuWidget::OnSettingsMenuClosed() {
}

void UDEPRECATED_DeathMenuWidget::OnQueryLatestSaveFinished(const FString& LatestSaveName) {
}

void UDEPRECATED_DeathMenuWidget::OnLoadComplete(const FString& Filename, ELoadGameResult Result) {
}

void UDEPRECATED_DeathMenuWidget::OnFinishedCalibratingHDR() {
}


