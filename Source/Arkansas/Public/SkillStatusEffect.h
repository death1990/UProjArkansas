#pragma once
#include "CoreMinimal.h"
#include "ESkill.h"
#include "StatusEffect.h"
#include "Templates/SubclassOf.h"
#include "SkillStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USkillStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkill SkillToCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, TSubclassOf<UStatusEffect>> SkillEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllThatPass;
    
public:
    USkillStatusEffect();

};

