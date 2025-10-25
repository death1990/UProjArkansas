#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "OEIVOEmotionSectionParams.h"
#include "OEIVOEmotionSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOEIVOEmotionSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOEIVOEmotionSectionParams Params;
    
    UOEIVOEmotionSection();

};

