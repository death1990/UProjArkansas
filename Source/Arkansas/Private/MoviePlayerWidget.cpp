#include "MoviePlayerWidget.h"

UMoviePlayerWidget::UMoviePlayerWidget() {
    this->bStopOnlyGameInput = true;
    this->SubtitleManager = NULL;
    this->InvisibleButton = NULL;
    this->SkipAnimationWidget = NULL;
    this->LeftAnchorImage = NULL;
    this->RightAnchorImage = NULL;
}

void UMoviePlayerWidget::OnMovieSkipped() {
}

void UMoviePlayerWidget::OnMoviePaused(bool bIsPaused) {
}


