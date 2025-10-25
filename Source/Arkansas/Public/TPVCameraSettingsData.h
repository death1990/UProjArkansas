#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "ECameraPerspective.h"
#include "TPVCameraSettingsData.generated.h"

class UCameraProfileSettingsData;

UCLASS(Blueprintable)
class ARKANSAS_API UTPVCameraSettingsData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraPerspective CameraPerspective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraProfileSettingsData* NearProfileSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraProfileSettingsData* FarProfileSettings;
    
public:
    UTPVCameraSettingsData();

};

