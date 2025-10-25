#pragma once
#include "CoreMinimal.h"
#include "BlockProperties.generated.h"

USTRUCT(BlueprintType)
struct FBlockProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackDamageMultiplier;
    
    ARKANSAS_API FBlockProperties();
};

