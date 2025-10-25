#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ArmorItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "ArmorSetItemDefinition.generated.h"

class UArmorSet;

USTRUCT(BlueprintType)
struct FArmorSetItemDefinition : public FArmorItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UArmorSet> ArmorSetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, bool> AlreadyDestroyedParts;
    
    ARKANSAS_API FArmorSetItemDefinition();
};

