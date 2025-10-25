#include "IndianaMainMenuUI.h"

AIndianaMainMenuUI::AIndianaMainMenuUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->bOverrideAlwaysRunFrontEndFlow = false;
    this->bOverrideAlwaysRunFirstTimeFlow = false;
    this->bOnlyShowPhotosensitivityInFirstTimeFlow = false;
    this->bOnlyShowAutosaveInFirstTimeFlow = false;
    this->ShaderPreCacheWidgetClass = NULL;
    this->PhotosensitivityDialogBoxClass = NULL;
    this->AutosaveDialogBoxClass = NULL;
    this->GammaSelectionClass = NULL;
    this->AccessibilityMenuClass = NULL;
    this->MainMenuClass = NULL;
    this->CachedShaderPreCacheWidget = NULL;
    this->CachedFrontEndDialogBoxWidget = NULL;
    this->CachedGammaSelectionWidget = NULL;
    this->CachedAccessibilityMenuWidget = NULL;
}

void AIndianaMainMenuUI::StartFrontEndFlow_BP() {
}

void AIndianaMainMenuUI::OnShaderPreCacheComplete() {
}

void AIndianaMainMenuUI::OnIntroMoviesComplete(bool bWasSkipped) {
}

void AIndianaMainMenuUI::OnGammaSelectionComplete() {
}

void AIndianaMainMenuUI::OnConfirmDialogBoxComplete() {
}

void AIndianaMainMenuUI::OnAccessibilitySettingsComplete() {
}

UMainMenuWidget* AIndianaMainMenuUI::GetMainMenuWidget_BP() const {
    return NULL;
}

AIndianaMainMenuUI* AIndianaMainMenuUI::GetMainMenuHUD_BP() const {
    return NULL;
}


