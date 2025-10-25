#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "MovieSubtitleData.generated.h"

class UFileMediaSource;
class USubtitleData;

UCLASS(Blueprintable)
class UMovieSubtitleData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UFileMediaSource>, USubtitleData*> SubtitleData;
    
public:
    UMovieSubtitleData();

};

