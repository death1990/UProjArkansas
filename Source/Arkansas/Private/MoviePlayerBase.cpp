#include "MoviePlayerBase.h"

UMoviePlayerBase::UMoviePlayerBase() {
    this->MovieDisplay = NULL;
    this->MovieOverlay = NULL;
    this->MediaTexture = NULL;
    this->bShouldLoopVideo = false;
}

void UMoviePlayerBase::StopMovie(bool bWasSkipped) {
}

void UMoviePlayerBase::SetLooping(bool bShouldLoop) {
}

void UMoviePlayerBase::ResumeMovie() {
}

void UMoviePlayerBase::PlayMovieWithMovieData(const FMovieData& MovieData) {
}

void UMoviePlayerBase::PlayMovies(TArray<FMovieData> MoviesToPlay) {
}

void UMoviePlayerBase::PlayMovie(UFileMediaSource* Movie) {
}

void UMoviePlayerBase::PauseMovie() {
}

void UMoviePlayerBase::OnMovieSourceOpened(const FString& OpenedUrl) {
}

void UMoviePlayerBase::OnMovieFinished() {
}

bool UMoviePlayerBase::IsMoviePlaying() const {
    return false;
}

bool UMoviePlayerBase::IsMoviePaused() const {
    return false;
}

void UMoviePlayerBase::ClearMovie() {
}


