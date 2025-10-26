#include "OEIBinkTrack.h"
#include "Evaluation/MovieSceneEvalTemplate.h"

UOEIBinkTrack::UOEIBinkTrack() : UMovieSceneTrack(FObjectInitializer::Get()) {
}

const TArray<UMovieSceneSection*>& UOEIBinkTrack::GetAllSections() const
{
    return Sections;

}

void UOEIBinkTrack::RemoveAllAnimationData()
{
}

bool UOEIBinkTrack::HasSection(const UMovieSceneSection& Section) const
{
    return false;
}

void UOEIBinkTrack::RemoveSection(UMovieSceneSection& Section)
{
}

bool UOEIBinkTrack::IsEmpty() const
{
    return false;
}

FMovieSceneEvalTemplatePtr UOEIBinkTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
    return FMovieSceneEvalTemplatePtr();
}


