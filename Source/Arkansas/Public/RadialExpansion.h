#pragma once
#include "CoreMinimal.h"
#include "RadialExplosion.h"
#include "RadialExpansion.generated.h"

USTRUCT(BlueprintType)
struct FRadialExpansion : public FRadialExplosion {
    GENERATED_BODY()
public:
    ARKANSAS_API FRadialExpansion();
};

