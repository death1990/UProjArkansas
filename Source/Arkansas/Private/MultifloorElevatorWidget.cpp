#include "MultifloorElevatorWidget.h"

UMultifloorElevatorWidget::UMultifloorElevatorWidget() {
    this->bStopOnlyGameInput = true;
    this->ElevatorNameTextBlock = NULL;
    this->EntryPanel = NULL;
    this->InputLabelGroup = NULL;
    this->bShowFloorsDescending = true;
    this->CurrentFloorTexture = NULL;
    this->AvailableFloorTexture = NULL;
    this->UnavailableFloorTexture = NULL;
    this->FloorButtonChildClass = NULL;
    this->CurrentFloorTextColor = EIndianaUIColorType::Invalid;
    this->AvailableFloorTextColor = EIndianaUIColorType::Invalid;
    this->LockedFloorTextColor = EIndianaUIColorType::Invalid;
    this->FadeOutPlaybackSpeed = 1.00f;
    this->bForceCloseOnRepeatedInput = true;
    this->FadeIn = NULL;
    this->FadeOut = NULL;
}

void UMultifloorElevatorWidget::OnResponse9InputAction() {
}

void UMultifloorElevatorWidget::OnResponse8InputAction() {
}

void UMultifloorElevatorWidget::OnResponse7InputAction() {
}

void UMultifloorElevatorWidget::OnResponse6InputAction() {
}

void UMultifloorElevatorWidget::OnResponse5InputAction() {
}

void UMultifloorElevatorWidget::OnResponse4InputAction() {
}

void UMultifloorElevatorWidget::OnResponse3InputAction() {
}

void UMultifloorElevatorWidget::OnResponse2InputAction() {
}

void UMultifloorElevatorWidget::OnResponse1InputAction() {
}

void UMultifloorElevatorWidget::OnFadeOutFinished() {
}


