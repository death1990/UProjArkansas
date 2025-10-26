#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include <GameplayTagContainer.h>
#include <LocString.h>
#include "EOEISettingPlatformRestriction.h"
#include "OEIUserSetting.generated.h"

UCLASS(Abstract, Blueprintable)
class OEISETTINGS_API UOEIUserSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOEISettingPlatformRestriction PlatformRestriction;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SettingTag;
    
public:
    UOEIUserSetting();

};

