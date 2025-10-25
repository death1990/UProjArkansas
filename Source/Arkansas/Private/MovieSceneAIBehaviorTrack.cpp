#include "MovieSceneAIBehaviorTrack.h"

UMovieSceneAIBehaviorTrack::UMovieSceneAIBehaviorTrack() {
    this->bFireEventsWhenForwards = true;
    this->bFireEventsWhenBackwards = true;
    this->EventPosition = EFireEventsAtPosition::AtEndOfEvaluation;
}


