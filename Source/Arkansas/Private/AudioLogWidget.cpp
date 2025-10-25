#include "AudioLogWidget.h"

UAudioLogWidget::UAudioLogWidget() {
    this->TimeToFadeIn = 1.00f;
    this->TimeToFadeOut = 1.00f;
    this->bLedgerWidget = false;
    this->SpeakerParamName = TEXT("SpeakerImage");
    this->DefaultSpeakerTexture = NULL;
    this->LogNameTextBlock = NULL;
    this->IconOverlay = NULL;
    this->StopImage = NULL;
    this->TimerText = NULL;
    this->TrackProgressBar = NULL;
    this->InputLabelGroup = NULL;
    this->AudioTrackHBox = NULL;
    this->TopContentContainer = NULL;
    this->SpeakerImage = NULL;
    this->AudioSizeBox = NULL;
    this->ContainerScaleBox = NULL;
    this->LedgerBackgroundBorder = NULL;
}

void UAudioLogWidget::TacticalTimeDilationStart() {
}

void UAudioLogWidget::TacticalTimeDilationEnd(float Delta) {
}

void UAudioLogWidget::OnScaleSettingChanged(float NewValue) {
}

void UAudioLogWidget::OnHUDVisibilityChanged(bool bVisible) {
}

void UAudioLogWidget::OnAudioLogPlayStateChanged(EAudioLogPlayState NewPlayState) {
}


