#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SurvivalTier.generated.h"

class USpell;

USTRUCT(BlueprintType)
struct FSurvivalTier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USpell> Spell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TierMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TierMax;
    
    ARKANSAS_API FSurvivalTier();
};

