#pragma once
#include "CoreMinimal.h"
#include "SkillValueExperienceRange.generated.h"

USTRUCT(BlueprintType)
struct FSkillValueExperienceRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XP;
    
    ARKANSAS_API FSkillValueExperienceRange();
};

