#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EItemInteraction.h"
#include "TagToAudioList.h"
#include "IndianaItemAudioData.generated.h"

UCLASS(Blueprintable)
class UIndianaItemAudioData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EItemInteraction, FTagToAudioList> WeaponAndArmorAudio;
    
public:
    UIndianaItemAudioData();

};

