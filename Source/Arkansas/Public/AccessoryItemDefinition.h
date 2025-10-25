#pragma once
#include "CoreMinimal.h"
#include "ArmorItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "AccessoryItemDefinition.generated.h"

class UAccessory;

USTRUCT(BlueprintType)
struct FAccessoryItemDefinition : public FArmorItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAccessory> AccessoryClass;
    
    ARKANSAS_API FAccessoryItemDefinition();
};

