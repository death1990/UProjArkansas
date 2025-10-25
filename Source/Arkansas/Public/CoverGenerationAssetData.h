#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CoverAssetCollisionData.h"
#include "CoverGenerationAssetData.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class ARKANSAS_API UCoverGenerationAssetData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UStaticMesh>, FCoverAssetCollisionData> MeshCoverCollisionData;
    
    UCoverGenerationAssetData();

};

