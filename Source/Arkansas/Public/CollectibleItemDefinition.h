#pragma once
#include "CoreMinimal.h"
#include "BaseItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "CollectibleItemDefinition.generated.h"

class UCollectibleItem;

USTRUCT(BlueprintType)
struct FCollectibleItemDefinition : public FBaseItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCollectibleItem> CollectibleItemClass;
    
    ARKANSAS_API FCollectibleItemDefinition();
};

