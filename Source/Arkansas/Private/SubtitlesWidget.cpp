#include "SubtitlesWidget.h"

USubtitlesWidget::USubtitlesWidget() {
    this->TextSizeBoxVerticalOffset = 35.00f;
    this->TextSizeBoxHorizontalOffset = 35.00f;
    this->MaxSpeakerArrowDistance = 3000.00f;
    this->UpdateArrowDistanceThreshold = 3;
    this->SubtitlesBackgroundImage = NULL;
    this->SubtitlesBackgroundPanel = NULL;
    this->AlternateContentSwitcher = NULL;
    this->AudioLogDisplay = NULL;
    this->RadioDisplay = NULL;
    this->SpeakerArrowPanel = NULL;
    this->SubtitleOverlay = NULL;
    this->SubtitleTextVerticalBox = NULL;
    this->SpeakerInfoPanel = NULL;
    this->SpeakerTextBlock = NULL;
    this->MessageTextBlock = NULL;
    this->PrependMessageTextBlock = NULL;
    this->TextSizeBox = NULL;
}

void USubtitlesWidget::OnSubtitleTextOpacityChanged(float NewOpacity) {
}

void USubtitlesWidget::OnSubtitleTextColorChanged(int32 NewColorIndex) {
}

void USubtitlesWidget::OnSubtitleShowSpeakerDirectionChanged(bool bShowDirection) {
}

void USubtitlesWidget::OnSubtitleShowRadioContentChanged(bool bShowRadioContent) {
}

void USubtitlesWidget::OnSubtitleShowAudioLogContentChanged(bool bShowAudioLogContentIn) {
}

void USubtitlesWidget::OnSubtitleMaxWidthChanged(int32 MaxWidthOption) {
}

void USubtitlesWidget::OnSubtitleFontSizeChanged(int32 NewSize) {
}

void USubtitlesWidget::OnSubtitleBGOpacityChanged(float NewOpacity) {
}

void USubtitlesWidget::OnSubtitleBGColorChanged(int32 NewColorIndex) {
}

void USubtitlesWidget::OnShowSubtitleSpeakerChanged(bool bShowSpeakerName) {
}

void USubtitlesWidget::OnShowFontOutlineChanged(bool bShowFontOutline) {
}

void USubtitlesWidget::OnShowFontDropShadowChanged(bool bShowShadowOffset) {
}

void USubtitlesWidget::OnBarkSubtitleVisibilityChanged(bool bVisible) {
}


