#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DamageTypeRequirement.generated.h"

class UIndianaDamageType;

USTRUCT(BlueprintType)
struct FDamageTypeRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIndianaDamageType> DamageType;
    
    ARKANSAS_API FDamageTypeRequirement();
};

