#pragma once
#include "CoreMinimal.h"
#include "SkillCheck.generated.h"

USTRUCT(BlueprintType)
struct FSkillCheck {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinSkill[5];
    
    ARKANSAS_API FSkillCheck();
};

