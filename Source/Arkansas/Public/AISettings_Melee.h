#pragma once
#include "CoreMinimal.h"
#include "AISettings_MeleeAttackPattern.h"
#include "AISettings_Melee.generated.h"

USTRUCT(BlueprintType)
struct FAISettings_Melee {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAISettings_MeleeAttackPattern> MeleeAttackPatterns;
    
    ARKANSAS_API FAISettings_Melee();
};

