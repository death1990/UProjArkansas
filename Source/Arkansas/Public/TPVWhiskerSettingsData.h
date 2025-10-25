#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "WhiskerSettingsData.h"
#include "TPVWhiskerSettingsData.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UTPVWhiskerSettingsData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWhiskerSettingsData WhiskerSettings;
    
    UTPVWhiskerSettingsData();

};

