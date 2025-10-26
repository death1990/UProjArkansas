#include "OEICineShotTrack.h"
#include "Evaluation/MovieSceneEvalTemplate.h"

UOEICineShotTrack::UOEICineShotTrack() {
}

const TArray<UMovieSceneSection*>& UOEICineShotTrack::GetAllSections() const
{
    return Sections;
}

void UOEICineShotTrack::RemoveAllAnimationData()
{
}

bool UOEICineShotTrack::HasSection(const UMovieSceneSection& Section) const
{
    return false;
}

void UOEICineShotTrack::RemoveSection(UMovieSceneSection& Section)
{
}

bool UOEICineShotTrack::IsEmpty() const
{
    return false;
}

FMovieSceneEvalTemplatePtr UOEICineShotTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
    return FMovieSceneEvalTemplatePtr();
}


