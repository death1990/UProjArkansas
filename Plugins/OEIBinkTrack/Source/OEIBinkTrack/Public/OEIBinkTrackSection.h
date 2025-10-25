#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "OEIBinkTrackSectionParams.h"
#include "OEIBinkTrackSection.generated.h"

UCLASS(Blueprintable)
class OEIBINKTRACK_API UOEIBinkTrackSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOEIBinkTrackSectionParams Params;
    
    UOEIBinkTrackSection();

};

