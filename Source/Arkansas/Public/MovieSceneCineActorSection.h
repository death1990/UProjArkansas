#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneCineActorSectionParams.h"
#include "MovieSceneCineActorSection.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UMovieSceneCineActorSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneCineActorSectionParams Params;
    
    UMovieSceneCineActorSection();

};

