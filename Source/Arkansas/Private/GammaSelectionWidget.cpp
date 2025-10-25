#include "GammaSelectionWidget.h"

UGammaSelectionWidget::UGammaSelectionWidget() {
    this->GammaSettingClassRef = NULL;
    this->DefaultGamma = 2.20f;
    this->GammaStepSize = 0.05f;
    this->GammaSlider = NULL;
    this->GammaValueTextBlock = NULL;
    this->DescriptionTextBlock = NULL;
    this->InputLabelGroup = NULL;
    this->InputLabelsHorizontalBox = NULL;
    this->AcceptButton = NULL;
    this->DefaultButton = NULL;
    this->GammaSetting = NULL;
}

void UGammaSelectionWidget::OnRestoreDefaults() {
}

void UGammaSelectionWidget::OnLocStringChanged() {
}

void UGammaSelectionWidget::OnGammaChanged(const FSliderEvent& Event) {
}

void UGammaSelectionWidget::OnGammaAccepted() {
}

void UGammaSelectionWidget::ApplyDefaults() {
}


