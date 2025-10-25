#pragma once
#include "CoreMinimal.h"
#include "BaseItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "CardCollectibleItemDefinition.generated.h"

class UCardCollectibleItem;

USTRUCT(BlueprintType)
struct FCardCollectibleItemDefinition : public FBaseItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCardCollectibleItem> CardCollectibleItemClass;
    
    ARKANSAS_API FCardCollectibleItemDefinition();
};

