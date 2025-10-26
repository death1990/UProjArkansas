#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
#include <AnimAppearanceCompatibility.h>
#include "OEIGestureAssetUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOEIGestureAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimAppearanceCompatibility AppearanceCompatibility;
    
    UOEIGestureAssetUserData();

};

