#pragma once
#include "CoreMinimal.h"
#include "ESkill.h"
#include "StatusEffect.h"
#include "SkillScalableStatusEffect.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USkillScalableStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkill Skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkillCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkillFromCaster;
    
public:
    USkillScalableStatusEffect();

};

