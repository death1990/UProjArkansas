#include "IndianaUserWidget.h"

UIndianaUserWidget::UIndianaUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ActiveStateValue = NULL;
    this->InactiveStateValue = NULL;
    this->bStopOnlyGameInput = false;
    this->bRecordFocusHistory = false;
    this->OwnerWidgetComponent = NULL;
}

void UIndianaUserWidget::StartMinimize() {
}

void UIndianaUserWidget::StartMaximize() {
}

void UIndianaUserWidget::StartIntro() {
}

void UIndianaUserWidget::SetDefaultUserFocus() {
}

void UIndianaUserWidget::RestoreOrSetDefaultUserFocus() {
}

void UIndianaUserWidget::OnStartOutroCb() {
}

void UIndianaUserWidget::OnStartMinimizeCb() {
}

void UIndianaUserWidget::OnStartMaximizeCb() {
}

void UIndianaUserWidget::OnStartIntroCb() {
}

bool UIndianaUserWidget::OnOutro_Implementation(const FAnimationCompleteSignature& AnimationCompleteCallback) {
    return false;
}

bool UIndianaUserWidget::OnMinimize_Implementation(const FAnimationCompleteSignature& AnimationCompleteCallback) {
    return false;
}

bool UIndianaUserWidget::OnMaximize_Implementation(const FAnimationCompleteSignature& AnimationCompleteCallback) {
    return false;
}

bool UIndianaUserWidget::OnIntro_Implementation(const FAnimationCompleteSignature& AnimationCompleteCallback) {
    return false;
}


void UIndianaUserWidget::OnFinalizeOutroCb() {
}

void UIndianaUserWidget::OnFinalizeMinimizeCb() {
}

void UIndianaUserWidget::OnFinalizeMinimize_Implementation() {
}

void UIndianaUserWidget::OnFinalizeMaximizeCb() {
}

void UIndianaUserWidget::OnFinalizeMaximize_Implementation() {
}

void UIndianaUserWidget::OnFinalizeIntroCb() {
}

void UIndianaUserWidget::OnCounterZero() {
}

void UIndianaUserWidget::OnCounterNonZero() {
}

void UIndianaUserWidget::OnCancelShutdown_Implementation() {
}

void UIndianaUserWidget::OnCancelMinimize_Implementation() {
}

bool UIndianaUserWidget::ObjectRefHasReferencers() const {
    return false;
}

bool UIndianaUserWidget::IsShuttingDown(bool bIncludeTransitioning) const {
    return false;
}

bool UIndianaUserWidget::IsMinimized(bool bIncludeTransitioning) const {
    return false;
}

bool UIndianaUserWidget::IsMaximized(bool bIncludeTransitioning) const {
    return false;
}

EWidgetOpenState UIndianaUserWidget::GetOpenState() const {
    return EWidgetOpenState::Maximized;
}

AIndianaUI* UIndianaUserWidget::GetIndianaUI() const {
    return NULL;
}


