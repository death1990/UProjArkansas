#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EIndianaAudioEvent.h"
#include "EUiHitType.h"
#include "UiHitTypeData.h"
#include "ReticleHitMarkerData.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UReticleHitMarkerData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUiHitType, FUiHitTypeData> DataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIndianaAudioEvent NormalKillAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIndianaAudioEvent CriticalKillAudioEvent;
    
public:
    UReticleHitMarkerData();

};

