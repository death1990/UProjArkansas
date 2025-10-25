#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "ECameraProfile.h"
#include "PriorityCameraProfile.h"
#include "CameraProfileSettingsData.generated.h"

class UTPVCameraProfile;

UCLASS(Blueprintable)
class ARKANSAS_API UCameraProfileSettingsData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTPVCameraProfile* DefaultCameraProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECameraProfile, FPriorityCameraProfile> CameraProfiles;
    
    UCameraProfileSettingsData();

};

