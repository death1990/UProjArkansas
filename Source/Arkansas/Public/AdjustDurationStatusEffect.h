#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "AdjustDurationStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAdjustDurationStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Modifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHostileOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ScaleToTotalDuration;
    
    UAdjustDurationStatusEffect();

};

