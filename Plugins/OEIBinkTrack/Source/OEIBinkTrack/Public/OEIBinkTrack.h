#pragma once
#include "CoreMinimal.h"
#include "MovieScene.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "OEIBinkTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable)
class OEIBINKTRACK_API UOEIBinkTrack : public UMovieSceneTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> Sections;
    
public:
    UOEIBinkTrack();
    // Required overrides
    virtual const TArray<UMovieSceneSection*>& GetAllSections() const override;
    virtual void RemoveAllAnimationData() override;
    virtual bool HasSection(const UMovieSceneSection& Section) const override;
    virtual void RemoveSection(UMovieSceneSection& Section) override;
    virtual bool IsEmpty() const override;

    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override;

    // Fix for true pure virtual functions not being implemented
};

