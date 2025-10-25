#include "WaitTimeWidget.h"

UWaitTimeWidget::UWaitTimeWidget() {
    this->WaitDurationTextBlock = NULL;
    this->WaitTimeResultTextBlock = NULL;
    this->ConfirmButton = NULL;
    this->CancelButton = NULL;
    this->LabelGroup = NULL;
    this->RestSlider = NULL;
    this->MinTimeTextBlock = NULL;
    this->MaxTimeTextBlock = NULL;
    this->DefaultStartingTime = 8;
}

void UWaitTimeWidget::OnSliderValueChanged(const FSliderEvent& Event) {
}

void UWaitTimeWidget::OnInputConfirm() {
}

void UWaitTimeWidget::OnInputBack() {
}


