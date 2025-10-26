#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FilePath -FallbackName=FilePath
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "OEIBinkTrackSectionTemplate.generated.h"

class UBinkMediaPlayer;
class UOEIBinkTrackSection;

USTRUCT(BlueprintType)
struct FOEIBinkTrackSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOEIBinkTrackSection* Section;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBinkMediaPlayer* MediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath MediaFilePath;
    
public:
    OEIBINKTRACK_API FOEIBinkTrackSectionTemplate();
};

