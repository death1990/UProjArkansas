#include "PhotoModeSliderBase.h"

UPhotoModeSliderBase::UPhotoModeSliderBase() {
    this->Focused = false;
    this->PreviousValue = 0.00f;
}

void UPhotoModeSliderBase::OnFocusChanged(bool HasFocus) {
}

void UPhotoModeSliderBase::OnCaptureEnd() {
}

void UPhotoModeSliderBase::OnCaptureBegin() {
}

void UPhotoModeSliderBase::HandleValueChanged(float NewValue) {
}


