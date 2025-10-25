#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "BodyIdle.h"
#include "BodyIdleAsset.generated.h"

UCLASS(Blueprintable)
class OEIANIMPROXYRUNTIME_API UBodyIdleAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBodyIdle AssetIdleData;
    
    UBodyIdleAsset();

};

