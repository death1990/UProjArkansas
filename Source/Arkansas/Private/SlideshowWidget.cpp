#include "SlideshowWidget.h"

USlideshowWidget::USlideshowWidget() {
    this->ActiveInputLabelTime = 3.00f;
    this->BodyText = NULL;
    this->MainOverlay = NULL;
    this->BodyBorder = NULL;
    this->PrimaryImage = NULL;
    this->InputLabelBack = NULL;
    this->InputLabelForward = NULL;
    this->MissingImageTextBlock = NULL;
}

void USlideshowWidget::SetSlideshowSubtitlesForceEnabled(bool bForceEnabled) {
}

void USlideshowWidget::SetSlideshowImagesAsset(USlideshowImageSet* ImageSet) {
}

void USlideshowWidget::SetSlideshowImageKey(const FString& ImageKey) {
}

void USlideshowWidget::OnCinematicSubtitleSettingChanged(bool bVisibleIn) {
}


