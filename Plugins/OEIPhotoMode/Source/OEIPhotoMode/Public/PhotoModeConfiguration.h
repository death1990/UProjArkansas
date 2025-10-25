#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PhotoModeConfig.h"
#include "PhotoModeConfiguration.generated.h"

UCLASS(Blueprintable)
class OEIPHOTOMODE_API UPhotoModeConfiguration : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhotoModeConfig Config;
    
    UPhotoModeConfiguration();

};

