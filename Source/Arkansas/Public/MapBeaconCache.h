#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "BeaconData.h"
#include "MapBeaconCache.generated.h"

USTRUCT(BlueprintType)
struct FMapBeaconCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FBeaconData> BeaconData;
    
    ARKANSAS_API FMapBeaconCache();
};

