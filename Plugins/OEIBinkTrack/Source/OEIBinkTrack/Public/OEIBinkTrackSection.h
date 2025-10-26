#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
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

