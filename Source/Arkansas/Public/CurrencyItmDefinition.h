#pragma once
#include "CoreMinimal.h"
#include "BaseItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "CurrencyItmDefinition.generated.h"

class UCurrencyItem;

USTRUCT(BlueprintType)
struct FCurrencyItmDefinition : public FBaseItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCurrencyItem> CurrencyItemClass;
    
    ARKANSAS_API FCurrencyItmDefinition();
};

