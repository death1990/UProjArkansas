#pragma once
#include "CoreMinimal.h"
#include "EStandingLevel.h"
#include "EStandingType.h"
#include "PsycopathDamageMultiplier.generated.h"

USTRUCT(BlueprintType)
struct FPsycopathDamageMultiplier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStandingType StandingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStandingLevel StandingLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageScalar;
    
    ARKANSAS_API FPsycopathDamageMultiplier();
};

