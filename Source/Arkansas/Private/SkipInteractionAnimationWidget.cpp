#include "SkipInteractionAnimationWidget.h"

USkipInteractionAnimationWidget::USkipInteractionAnimationWidget() {
    this->bStopOnlyGameInput = true;
    this->MaxTimeBetweenInputs = 4.00f;
    this->bMouseMoveShowsSkip = true;
    this->bHideDestroysWidget = false;
    this->bConsumeAllInput = true;
    this->bSupportPauseFunctionality = false;
    this->FadeRateScale = 1.00f;
    this->SkipContainer = NULL;
    this->HoldInputLabel = NULL;
    this->PauseDisplay = NULL;
}

void USkipInteractionAnimationWidget::TogglePausedState() {
}

void USkipInteractionAnimationWidget::OnSkippedInteractionAnimation() {
}

void USkipInteractionAnimationWidget::ForcePausedState() {
}


