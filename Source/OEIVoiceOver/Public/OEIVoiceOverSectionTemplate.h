#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "OEIVoiceOverSectionTemplate.generated.h"

class UOEIVoiceOverSection;

USTRUCT(BlueprintType)
struct FOEIVoiceOverSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOEIVoiceOverSection* Section;
    
    OEIVOICEOVER_API FOEIVoiceOverSectionTemplate();
};

