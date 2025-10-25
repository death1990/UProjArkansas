#pragma once
#include "CoreMinimal.h"
#include "ArmorItemDefinition.h"
#include "ArmorModDampeningItemDefinition.generated.h"

USTRUCT(BlueprintType)
struct FArmorModDampeningItemDefinition : public FArmorItemDefinition {
    GENERATED_BODY()
public:
    ARKANSAS_API FArmorModDampeningItemDefinition();
};

