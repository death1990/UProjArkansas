#include "MovieSceneAkAudioEventTrack.h"
#include "Evaluation/MovieSceneEvalTemplate.h"

UMovieSceneAkAudioEventTrack::UMovieSceneAkAudioEventTrack() {
}

const TArray<UMovieSceneSection*>& UMovieSceneAkAudioEventTrack::GetAllSections() const
{
    return Sections;
}

void UMovieSceneAkAudioEventTrack::RemoveAllAnimationData()
{
}

bool UMovieSceneAkAudioEventTrack::HasSection(const UMovieSceneSection& Section) const
{
    return false;
}

void UMovieSceneAkAudioEventTrack::RemoveSection(UMovieSceneSection& Section)
{
}

bool UMovieSceneAkAudioEventTrack::IsEmpty() const
{
    return false;
}

FMovieSceneEvalTemplatePtr UMovieSceneAkAudioEventTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
    return FMovieSceneEvalTemplatePtr();
}


