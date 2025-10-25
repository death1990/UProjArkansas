#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCineActorSectionParams.generated.h"

class UOEICineShotTargetSettings;

USTRUCT(BlueprintType)
struct ARKANSAS_API FMovieSceneCineActorSectionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOEICineShotTargetSettings* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPersist;
    
    FMovieSceneCineActorSectionParams();
};

