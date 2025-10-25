#pragma once
#include "CoreMinimal.h"
#include "ESkill.h"
#include "ESkillDifficultyRange.h"
#include "ESkillDifficultyTier.h"
#include "InteractableRequirement.h"
#include "SkillRequirement.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API USkillRequirement : public UInteractableRequirement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkill Skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkillDifficultyRange SkillDifficultyRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceSkillCheckTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkillDifficultyTier ForcedSkillCheckTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverrideSkillValue;
    
public:
    USkillRequirement();

};

