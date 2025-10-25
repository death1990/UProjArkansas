#pragma once
#include "CoreMinimal.h"
#include "MovieData.generated.h"

class UFileMediaSource;

USTRUCT(BlueprintType)
struct FMovieData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFileMediaSource* Movie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowsEnglishText;
    
    ARKANSAS_API FMovieData();
};

