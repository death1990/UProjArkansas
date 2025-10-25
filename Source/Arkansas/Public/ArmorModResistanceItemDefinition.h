#pragma once
#include "CoreMinimal.h"
#include "ArmorItemDefinition.h"
#include "ArmorModResistanceItemDefinition.generated.h"

USTRUCT(BlueprintType)
struct FArmorModResistanceItemDefinition : public FArmorItemDefinition {
    GENERATED_BODY()
public:
    ARKANSAS_API FArmorModResistanceItemDefinition();
};

