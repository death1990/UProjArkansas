#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "AkAudioEventArray.h"
#include "EIndianaAudioEvent.h"
#include "IndianaUIAudioData.generated.h"

UCLASS(Blueprintable)
class UIndianaUIAudioData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIndianaAudioEvent, FAkAudioEventArray> AudioEvents;
    
public:
    UIndianaUIAudioData();

};

