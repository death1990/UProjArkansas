#include "OptionSliderWidget.h"

UOptionSliderWidget::UOptionSliderWidget() {
    this->OptionTitleTextBlock = NULL;
    this->NumEntriesDisplayTextBlock = NULL;
    this->MiddlePointImage = NULL;
    this->OptionSlider = NULL;
    this->GamepadButton = NULL;
    this->PreviousStep = NULL;
    this->NextStep = NULL;
    this->bShowButtonsGamepad = true;
    this->bShowSliderValues = true;
}

void UOptionSliderWidget::OnSliderValueChanged(const FSliderEvent& Event) {
}


