#pragma once
#include "CoreMinimal.h"
#include "BaseItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "RegionCollectibleItemDefinition.generated.h"

class URegionCollectibleItem;

USTRUCT(BlueprintType)
struct FRegionCollectibleItemDefinition : public FBaseItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URegionCollectibleItem> RegionCollectibleItemClass;
    
    ARKANSAS_API FRegionCollectibleItemDefinition();
};

