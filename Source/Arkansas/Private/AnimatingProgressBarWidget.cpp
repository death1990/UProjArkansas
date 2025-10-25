#include "AnimatingProgressBarWidget.h"

UAnimatingProgressBarWidget::UAnimatingProgressBarWidget() {
    this->ProspectiveChangeImage = NULL;
    this->CurrentChangeImage = NULL;
    this->EmptyImage = NULL;
    this->FullImage = NULL;
    this->ProgressBarParamName = TEXT("MaskShift");
    this->PulseParamName = TEXT("bPulse");
    this->SegmentCountParam = TEXT("Number of Segments");
    this->BarRegenParamName = TEXT("ShowRegen");
    this->EnergyBarMaterial = NULL;
    this->ProgressBarAnimations = EBarAnimationOptions::EAnimateAll;
    this->bAnimateForDuration = true;
    this->bSkipInitializingAnimation = false;
    this->AnimDuration = 2.00f;
    this->PercentRateLimit = 2.00f;
    this->bAnimOneBarAtATime = false;
    this->bShowPreview = true;
    this->bAnimatePreview = false;
    this->bWaitAnimateCurrentPreview = false;
    this->bShowEmptyImage = false;
    this->bShowFullImage = false;
    this->bUseNonNormalizedValues = false;
    this->CurrentChangeMaterial = NULL;
    this->ProspectiveChangeMaterial = NULL;
    this->bDisplaySegments = true;
    this->ValuePerSegment = 100.00f;
}

void UAnimatingProgressBarWidget::SetCurrentValueBrushOverride(FSlateBrush SetBrush) {
}

void UAnimatingProgressBarWidget::ChangeFlashAnimation(bool bFlashOn) {
}


