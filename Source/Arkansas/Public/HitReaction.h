#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HitReaction.generated.h"

class UDirectionalAnimDisableStatusEffect;

USTRUCT(BlueprintType)
struct FHitReaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDirectionalAnimDisableStatusEffect> StatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownTime;
    
    ARKANSAS_API FHitReaction();
};

