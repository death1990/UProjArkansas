#include "StackSplittingWidget.h"

UStackSplittingWidget::UStackSplittingWidget() {
    this->ContentVerticalPadding = 15.00f;
    this->BackingMaterialSize = 932;
    this->BackingTopSize = 101;
    this->BackgroundOpacity = 0.50f;
    this->bEnableStepAcceleration = true;
    this->AccelerationResetTime = 0.25f;
    this->bEnableStepMKB = true;
    this->MinorAccelerationStepSize = 2;
    this->MinorStepConsecutiveThreshold = 5;
    this->MajorAccelerationStepSize = 4;
    this->MajorStepConsecutiveThreshold = 10;
    this->MajorInputStepSize = 10;
    this->MinorInputStepSize = 5;
    this->BackgroundWidget = NULL;
    this->TextBlock = NULL;
    this->SubTextBlock = NULL;
    this->ValueTextBlock = NULL;
    this->FullStackValue = NULL;
    this->ConfirmLabel = NULL;
    this->BackLabel = NULL;
    this->MinButton = NULL;
    this->MaxButton = NULL;
    this->ValueSlider = NULL;
    this->ContentSizeBox = NULL;
    this->MinorStepDisplay = NULL;
    this->MinorStepSizeText = NULL;
    this->MajorStepDisplay = NULL;
    this->MajorStepSizeText = NULL;
    this->StackSizeReducedDisplay = NULL;
    this->ItemToSplit = NULL;
}

void UStackSplittingWidget::OnStackSplitMin() {
}

void UStackSplittingWidget::OnStackSplitMax() {
}

void UStackSplittingWidget::OnSliderValueChanged(const FSliderEvent& Event) {
}

void UStackSplittingWidget::OnResetConsecutiveSteps() {
}

void UStackSplittingWidget::OnMinorIncrement() {
}

void UStackSplittingWidget::OnMinorDecrement() {
}

void UStackSplittingWidget::OnMajorIncrement() {
}

void UStackSplittingWidget::OnMajorDecrement() {
}

void UStackSplittingWidget::OnInputConfirm() {
}

void UStackSplittingWidget::OnInputBack() {
}


