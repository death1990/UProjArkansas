#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "OEIVOEmotionSectionParams.h"
#include "OEIVOEmotionSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FOEIVOEmotionSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOEIVOEmotionSectionParams Params;
    
    OEIVOICEOVER_API FOEIVOEmotionSectionTemplate();
};

