#include "DownedMenuWidget.h"

UDownedMenuWidget::UDownedMenuWidget() {
    this->InsertBitsAudioEvent = NULL;
    this->InsertBitsMarkTwoAudioEvent = NULL;
    this->bHideReviveButtonsIfPlayerCantRevive = true;
    this->GameOverColor = EIndianaUIColorType::IndianaRed;
    this->SaveLoadClass = NULL;
    this->GameOverDisplay = NULL;
    this->DeathReasonTextBlock = NULL;
    this->OptionsList = NULL;
    this->InsertBitsButton = NULL;
    this->InsertBitsText = NULL;
    this->ResurrectButton_DEBUG = NULL;
    this->TraumaKitRestrictionText = NULL;
    this->TraumaKitButton = NULL;
    this->ContinueButton = NULL;
    this->LoadButton = NULL;
    this->MainMenuButton = NULL;
    this->QuitButton = NULL;
}

void UDownedMenuWidget::OnQueryLatestSaveFinished(const FString& LatestSaveName) {
}


