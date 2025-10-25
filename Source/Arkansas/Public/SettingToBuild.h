#pragma once
#include "CoreMinimal.h"
#include "ECombinedSettingType.h"
#include "ESetting.h"
#include "ESpecialSettingButton.h"
#include "SettingToBuild.generated.h"

class UOEIUserSetting;

USTRUCT(BlueprintType)
struct FSettingToBuild {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECombinedSettingType SettingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESetting UserSettingToBuild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOEIUserSetting* SettingAssetToBuild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpecialSettingButton SpecialButton;
    
    ARKANSAS_API FSettingToBuild();
};

