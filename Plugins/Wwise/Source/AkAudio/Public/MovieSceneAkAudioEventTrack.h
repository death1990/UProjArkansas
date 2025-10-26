#pragma once
#include "CoreMinimal.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "MovieSceneAkTrack.h"
#include "MovieSceneAkAudioEventTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UMovieSceneAkAudioEventTrack();

    // --- Required Overrides ---
    virtual const TArray<UMovieSceneSection*>& GetAllSections() const override;
    virtual void RemoveAllAnimationData() override;
    virtual bool HasSection(const UMovieSceneSection& Section) const override;
    virtual void RemoveSection(UMovieSceneSection& Section) override;
    virtual bool IsEmpty() const override;

    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override;
    // Fix for true pure virtual functions not being implemented
};

