#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieSceneCineActorSectionTemplate.generated.h"

class UMovieSceneCineActorSection;

USTRUCT(BlueprintType)
struct FMovieSceneCineActorSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneCineActorSection* Section;
    
    ARKANSAS_API FMovieSceneCineActorSectionTemplate();
};

