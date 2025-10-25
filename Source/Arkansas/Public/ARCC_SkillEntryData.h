#pragma once
#include "CoreMinimal.h"
#include "MovieData.h"
#include "ARCC_SkillEntryData.generated.h"

USTRUCT(BlueprintType)
struct FARCC_SkillEntryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieData MoviePlayerData;
    
    ARKANSAS_API FARCC_SkillEntryData();
};

