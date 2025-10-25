#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
#include "ESimplygonMetaTagType.h"
#include "SimplygonAssetUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USimplygonAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESimplygonMetaTagType MetaTag;
    
    USimplygonAssetUserData();

};

