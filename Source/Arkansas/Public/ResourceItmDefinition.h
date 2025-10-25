#pragma once
#include "CoreMinimal.h"
#include "BaseItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "ResourceItmDefinition.generated.h"

class UResourceItem;

USTRUCT(BlueprintType)
struct FResourceItmDefinition : public FBaseItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UResourceItem> ResourceItemClass;
    
    ARKANSAS_API FResourceItmDefinition();
};

