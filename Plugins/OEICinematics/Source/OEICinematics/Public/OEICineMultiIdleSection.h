#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
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

