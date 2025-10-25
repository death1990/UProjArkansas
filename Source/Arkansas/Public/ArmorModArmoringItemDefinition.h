#pragma once
#include "CoreMinimal.h"
#include "ArmorItemDefinition.h"
#include "ArmorModArmoringItemDefinition.generated.h"

USTRUCT(BlueprintType)
struct FArmorModArmoringItemDefinition : public FArmorItemDefinition {
    GENERATED_BODY()
public:
    ARKANSAS_API FArmorModArmoringItemDefinition();
};

