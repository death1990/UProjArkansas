#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DynamicOverrides.h"
#include "ESetting.h"
#include "ESettingSubcategory.h"
#include "GamepadLayout.h"
#include "SettingDescription.h"
#include "SubcategoryDescription.h"
#include "SettingsMenuData.generated.h"

UCLASS(Blueprintable)
class USettingsMenuData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESetting, FSettingDescription> SettingMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESettingSubcategory, FSubcategoryDescription> SubcategoryMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGamepadLayout> GamepadLayouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynamicOverrides DynamicOverrides;
    
    USettingsMenuData();

};

