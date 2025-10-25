#include "MovieSceneAnimProxyTrack.h"

UMovieSceneAnimProxyTrack::UMovieSceneAnimProxyTrack() {
    this->bFireEventsWhenForwards = true;
    this->bFireEventsWhenBackwards = true;
    this->EventPosition = EFireEventsAtPosition::AtEndOfEvaluation;
}


