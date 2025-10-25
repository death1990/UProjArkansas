#pragma once
#include "CoreMinimal.h"
#include "ESkillCategory.h"
#include "OnNewSkillCategorySelectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNewSkillCategorySelected, ESkillCategory, SkillCategory);

