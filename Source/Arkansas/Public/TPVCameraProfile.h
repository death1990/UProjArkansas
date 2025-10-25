#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "ECameraContext.h"
#include "TPVCameraConfig.h"
#include "TPVCameraProfile.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UTPVCameraProfile : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECameraContext, FTPVCameraConfig> Configs;
    
public:
    UTPVCameraProfile();

};

