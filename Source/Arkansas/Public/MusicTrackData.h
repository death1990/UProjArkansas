#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "MusicTrackData.generated.h"

UCLASS(Blueprintable, Deprecated, NotPlaceable)
class UDEPRECATED_MusicTrackData : public UDataAsset {
    GENERATED_BODY()
public:
    UDEPRECATED_MusicTrackData();

};

