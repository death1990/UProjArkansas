#pragma once
#include "CoreMinimal.h"
#include "ESkill.h"
#include "ESkillCategory.h"
#include "SkillCategoryDetail.generated.h"

USTRUCT(BlueprintType)
struct FSkillCategoryDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkillCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESkill> AssociatedSkills;
    
    ARKANSAS_API FSkillCategoryDetail();
};

