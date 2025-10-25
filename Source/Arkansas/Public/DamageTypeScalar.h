#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DamageTypeScalar.generated.h"

class UIndianaDamageType;

USTRUCT(BlueprintType)
struct FDamageTypeScalar {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UIndianaDamageType>> DamageTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scalar;
    
    ARKANSAS_API FDamageTypeScalar();
};

