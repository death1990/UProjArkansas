#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "WwiseVolumeData.h"
#include "OEIWwiseAmbientVolumeData.generated.h"

UCLASS(Blueprintable)
class OEIWWISE_API UOEIWwiseAmbientVolumeData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWwiseVolumeData VolumeData;
    
    UOEIWwiseAmbientVolumeData();

};

