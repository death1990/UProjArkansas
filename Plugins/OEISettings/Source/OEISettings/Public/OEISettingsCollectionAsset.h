#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "OEISettingsCollectionAsset.generated.h"

class UOEIUserSetting;

UCLASS(Blueprintable)
class OEISETTINGS_API UOEISettingsCollectionAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOEIUserSetting*> SettingAssets;
    
public:
    UOEISettingsCollectionAsset();

};

