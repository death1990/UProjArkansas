#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "OEICineIdleSectionParams.h"
#include "OEICineIdleSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOEICineIdleSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOEICineIdleSectionParams Params;
    
    UOEICineIdleSection();

};

