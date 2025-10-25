#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EPhotoModeSetting.h"
#include "SettingInfo.h"
#include "PhotoModeSettingsData.generated.h"

class UColorGradingProfileData;

UCLASS(Blueprintable)
class OEIPHOTOMODE_API UPhotoModeSettingsData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPhotoModeSetting, FSettingInfo> SettingInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UColorGradingProfileData* ColorGradingProfiles;
    
    UPhotoModeSettingsData();

};

