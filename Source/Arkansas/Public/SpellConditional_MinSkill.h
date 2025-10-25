#pragma once
#include "CoreMinimal.h"
#include "ESkill.h"
#include "SpellConditional.h"
#include "SpellConditional_MinSkill.generated.h"

class URpgStat;

UCLASS(Blueprintable, EditInlineNew)
class USpellConditional_MinSkill : public USpellConditional {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkill Skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URpgStat* MinSkillStat;
    
public:
    USpellConditional_MinSkill();

};

