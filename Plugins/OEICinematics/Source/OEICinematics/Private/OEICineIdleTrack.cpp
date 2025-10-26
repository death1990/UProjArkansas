#include "OEICineIdleTrack.h"
#include "Evaluation/MovieSceneEvalTemplate.h"

UOEICineIdleTrack::UOEICineIdleTrack() {
}

const TArray<UMovieSceneSection*>& UOEICineIdleTrack::GetAllSections() const
{
    return Sections;
}

void UOEICineIdleTrack::RemoveAllAnimationData()
{
}

bool UOEICineIdleTrack::HasSection(const UMovieSceneSection& Section) const
{
    return false;
}

void UOEICineIdleTrack::RemoveSection(UMovieSceneSection& Section)
{
}

bool UOEICineIdleTrack::IsEmpty() const
{
    return false;
}

FMovieSceneEvalTemplatePtr UOEICineIdleTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
    return FMovieSceneEvalTemplatePtr();
}


