#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
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

