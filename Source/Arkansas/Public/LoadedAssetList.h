#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "LoadingAssetPaths.h"
#include "LoadedAssetList.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API ULoadedAssetList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLoadingAssetPaths> ListOfAssetsToLoad;
    
    ULoadedAssetList();

};

