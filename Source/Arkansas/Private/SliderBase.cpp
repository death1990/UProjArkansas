#include "SliderBase.h"

USliderBase::USliderBase() {
    this->Value = 0.00f;
    this->Orientation = Orient_Horizontal;
    this->IndentHandle = false;
    this->Locked = false;
    this->StepSize = 0.01f;
    this->IsFocusable = true;
}

void USliderBase::SetValue(float InValue) {
}

void USliderBase::SetStepSize(float InValue) {
}

void USliderBase::SetLocked(bool InValue) {
}

void USliderBase::SetIndentHandle(bool InValue) {
}

void USliderBase::SetAndCommitValue(float InValue) {
}

void USliderBase::ModifySliderValue(float InValue) {
}

float USliderBase::GetValue() const {
    return 0.0f;
}


