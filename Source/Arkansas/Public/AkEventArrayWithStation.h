#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ERadioStation.h"
#include "AkEventArrayWithStation.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class ARKANSAS_API UAkEventArrayWithStation : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERadioStation Station;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> ChannelEvents;
    
public:
    UAkEventArrayWithStation();

};

