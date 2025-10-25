#pragma once
#include "CoreMinimal.h"
#include "ArmorItemDefinition.h"
#include "ArmorModDecalItemDefinition.generated.h"

USTRUCT(BlueprintType)
struct FArmorModDecalItemDefinition : public FArmorItemDefinition {
    GENERATED_BODY()
public:
    ARKANSAS_API FArmorModDecalItemDefinition();
};

