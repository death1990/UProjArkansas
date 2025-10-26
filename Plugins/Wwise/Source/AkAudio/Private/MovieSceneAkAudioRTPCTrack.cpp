#include "MovieSceneAkAudioRTPCTrack.h"
#include "Evaluation/MovieSceneEvalTemplate.h"

UMovieSceneAkAudioRTPCTrack::UMovieSceneAkAudioRTPCTrack() {
}

const TArray<UMovieSceneSection*>& UMovieSceneAkAudioRTPCTrack::GetAllSections() const
{
	return Sections;
}

void UMovieSceneAkAudioRTPCTrack::RemoveAllAnimationData()
{
}

bool UMovieSceneAkAudioRTPCTrack::HasSection(const UMovieSceneSection& Section) const
{
	return false;
}

void UMovieSceneAkAudioRTPCTrack::RemoveSection(UMovieSceneSection& Section)
{
}

bool UMovieSceneAkAudioRTPCTrack::IsEmpty() const
{
	return false;
}

FMovieSceneEvalTemplatePtr UMovieSceneAkAudioRTPCTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
	return FMovieSceneEvalTemplatePtr();
}


