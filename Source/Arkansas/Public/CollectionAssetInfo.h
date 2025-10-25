#pragma once
#include "CoreMinimal.h"
#include "CollectionAssetInfo.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FCollectionAssetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* Asset;
    
    ARKANSAS_API FCollectionAssetInfo();
};

