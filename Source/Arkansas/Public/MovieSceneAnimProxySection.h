#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneAnimProxySectionData.h"
#include "MovieSceneAnimProxySection.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UMovieSceneAnimProxySection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneAnimProxySectionData EventData;
    
    UMovieSceneAnimProxySection();

};

