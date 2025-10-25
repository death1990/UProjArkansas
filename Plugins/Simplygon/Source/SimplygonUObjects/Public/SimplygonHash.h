#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
#include "SimplygonHash.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USimplygonHash : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Hash;
    
    USimplygonHash();

};

