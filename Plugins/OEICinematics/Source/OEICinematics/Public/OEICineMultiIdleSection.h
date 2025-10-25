#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "OEICineMultiIdleSectionParams.h"
#include "OEICineMultiIdleSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOEICineMultiIdleSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOEICineMultiIdleSectionParams Params;
    
    UOEICineMultiIdleSection();

};

