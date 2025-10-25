#pragma once
#include "CoreMinimal.h"
#include "ArmorItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "HelmetItemDefinition.generated.h"

class UHelmet;

USTRUCT(BlueprintType)
struct FHelmetItemDefinition : public FArmorItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHelmet> HelmetClass;
    
    ARKANSAS_API FHelmetItemDefinition();
};

