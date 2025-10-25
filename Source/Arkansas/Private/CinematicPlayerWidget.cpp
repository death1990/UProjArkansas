#include "CinematicPlayerWidget.h"

UCinematicPlayerWidget::UCinematicPlayerWidget() {
    this->bStopOnlyGameInput = true;
    this->CinematicOverlay = NULL;
    this->SkipAnimationWidget = NULL;
}

void UCinematicPlayerWidget::SkipCinematic() {
}

void UCinematicPlayerWidget::PlayCinematic(UMovieSceneSequencePlayer* Cinematic) {
}

void UCinematicPlayerWidget::PauseCinematic(bool bIsPaused) {
}

void UCinematicPlayerWidget::FinishCinematic() {
}


