#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "StationAkEvents.h"
#include "RadioAudioData.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API URadioAudioData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStationAkEvents AudioEvents;
    
    URadioAudioData();

};

