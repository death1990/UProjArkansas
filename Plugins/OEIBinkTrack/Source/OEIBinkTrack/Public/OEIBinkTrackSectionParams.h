#pragma once
#include "CoreMinimal.h"
#include <BinkMediaPlayer.h>

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FilePath -FallbackName=FilePath
#include "OEIBinkTrackSectionParams.generated.h"

class UBinkMediaPlayer;

USTRUCT(BlueprintType)
struct FOEIBinkTrackSectionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBinkMediaPlayer* MediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath MediaFilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBinkMediaPlayerBinkDrawStyle> DrawStyle;
    
    OEIBINKTRACK_API FOEIBinkTrackSectionParams();
};

