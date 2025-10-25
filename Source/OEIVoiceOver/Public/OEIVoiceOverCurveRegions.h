#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "OEIVoiceOverCurveRegion.h"
#include "OEIVoiceOverCurveRegions.generated.h"

UCLASS(Blueprintable)
class UOEIVoiceOverCurveRegions : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOEIVoiceOverCurveRegion> Regions;
    
public:
    UOEIVoiceOverCurveRegions();

};

