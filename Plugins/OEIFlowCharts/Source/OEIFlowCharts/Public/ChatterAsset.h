#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=OEIDataAssetInterface -FallbackName=OEIDataAssetInterface
#include "ChatterBundle.h"
#include "ChatterAsset.generated.h"

UCLASS(Blueprintable)
class OEIFLOWCHARTS_API UChatterAsset : public UDataAsset, public IOEIDataAssetInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChatterBundle ChatterBundle;
    
public:
    UChatterAsset();


    // Fix for true pure virtual functions not being implemented
};

