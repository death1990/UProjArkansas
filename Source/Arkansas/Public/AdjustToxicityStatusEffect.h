#pragma once
#include "CoreMinimal.h"
#include "SkillScalableStatusEffect.h"
#include "AdjustToxicityStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UAdjustToxicityStatusEffect : public USkillScalableStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Toxicity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePassThroughValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PassThroughValuePercentageMultiplier;
    
public:
    UAdjustToxicityStatusEffect();

};

