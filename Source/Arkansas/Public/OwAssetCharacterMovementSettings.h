#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
#include "EOwAssetCharacterMovementSettingsBool.h"
#include "OwAssetCharacterMovementSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOwAssetCharacterMovementSettings : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOwAssetCharacterMovementSettingsBool SupportsNavLinkGeneration;
    
    UOwAssetCharacterMovementSettings();

};

