#pragma once
#include "CoreMinimal.h"
#include "ArmorItemDefinition.h"
#include "ArmorModDyeItemDefinition.generated.h"

USTRUCT(BlueprintType)
struct FArmorModDyeItemDefinition : public FArmorItemDefinition {
    GENERATED_BODY()
public:
    ARKANSAS_API FArmorModDyeItemDefinition();
};

