#pragma once
#include "CoreMinimal.h"
#include "ArmorItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "CompanionItemDefinition.generated.h"

class UCompanionItem;

USTRUCT(BlueprintType)
struct FCompanionItemDefinition : public FArmorItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCompanionItem> CompanionItemClass;
    
    ARKANSAS_API FCompanionItemDefinition();
};

