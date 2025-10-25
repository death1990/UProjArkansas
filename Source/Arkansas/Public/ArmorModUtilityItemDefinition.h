#pragma once
#include "CoreMinimal.h"
#include "ArmorItemDefinition.h"
#include "ArmorModUtilityItemDefinition.generated.h"

USTRUCT(BlueprintType)
struct FArmorModUtilityItemDefinition : public FArmorItemDefinition {
    GENERATED_BODY()
public:
    ARKANSAS_API FArmorModUtilityItemDefinition();
};

