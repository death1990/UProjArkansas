#pragma once
#include "CoreMinimal.h"
#include "ArmorItemDefinition.h"
#include "ArmorModMaterialsItemDefinition.generated.h"

USTRUCT(BlueprintType)
struct FArmorModMaterialsItemDefinition : public FArmorItemDefinition {
    GENERATED_BODY()
public:
    ARKANSAS_API FArmorModMaterialsItemDefinition();
};

