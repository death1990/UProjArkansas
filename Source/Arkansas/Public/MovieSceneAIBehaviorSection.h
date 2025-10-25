#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneAIBehaviorSectionData.h"
#include "MovieSceneAIBehaviorSection.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UMovieSceneAIBehaviorSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneAIBehaviorSectionData EventData;
    
    UMovieSceneAIBehaviorSection();

};

