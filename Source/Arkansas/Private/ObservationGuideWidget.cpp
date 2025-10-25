#include "ObservationGuideWidget.h"

UObservationGuideWidget::UObservationGuideWidget() {
    this->DirectionUpdateTickRestrictor = 0;
    this->ObservationLookAtDuration = 3.00f;
    this->OnStartAudioEvent = NULL;
    this->OnStopAudioEvent = NULL;
    this->OnCompleteAudioEvent = NULL;
    this->ObservationLoopEvent = NULL;
    this->OnTrapCompleteAudioEvent = NULL;
    this->TrapObservationLoopEvent = NULL;
    this->StopObservationLoopEvent = NULL;
    this->StopTrapObservationLoopEvent = NULL;
    this->ProgressRTPC = NULL;
    this->bUseAimBasedAngle = false;
    this->ClampAngleSides = 90;
    this->ContainerSizeBox = NULL;
    this->HeadingIndicatorImage = NULL;
    this->LeftBarImage = NULL;
    this->RightBarImage = NULL;
    this->LeftBarOverlay = NULL;
    this->RightBarOverlay = NULL;
    this->ObservationIdentifierImage = NULL;
    this->CompanionObservationIcon = NULL;
    this->ContainerScaleBox = NULL;
    this->bIsActivelyTrackingInteractable = false;
    this->FadeIn = NULL;
    this->FadeOut = NULL;
    this->ObservationComplete = NULL;
}

void UObservationGuideWidget::OnTargetEnd(AActor* Actor) {
}

void UObservationGuideWidget::OnTargetBegin(AActor* Actor) {
}

void UObservationGuideWidget::OnScaleSettingChanged(float NewValue) {
}

void UObservationGuideWidget::OnObservationComplete() {
}

void UObservationGuideWidget::OnInteraction(const FInteractionDescription& Description) {
}



