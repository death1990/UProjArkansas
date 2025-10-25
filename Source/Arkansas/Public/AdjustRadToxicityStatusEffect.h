#pragma once
#include "CoreMinimal.h"
#include "SkillScalableStatusEffect.h"
#include "AdjustRadToxicityStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UAdjustRadToxicityStatusEffect : public USkillScalableStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadToxicity;
    
public:
    UAdjustRadToxicityStatusEffect();

};

