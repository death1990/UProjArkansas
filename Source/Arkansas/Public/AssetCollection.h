#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CollectionAssetInfo.h"
#include "AssetCollection.generated.h"

UCLASS(Blueprintable, DefaultToInstanced)
class UAssetCollection : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, FCollectionAssetInfo> AssetInfos;
    
public:
    UAssetCollection();

};

