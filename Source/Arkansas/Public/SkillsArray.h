#pragma once
#include "CoreMinimal.h"
#include "ESkill.h"
#include "SkillsArray.generated.h"

USTRUCT(BlueprintType)
struct FSkillsArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESkill> Skills;
    
    ARKANSAS_API FSkillsArray();
};

