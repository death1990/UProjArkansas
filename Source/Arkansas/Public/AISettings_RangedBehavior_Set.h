#pragma once
#include "CoreMinimal.h"
#include "AISettings_CoverOptions.h"
#include "AISettings_RangedOptions.h"
#include "AISettings_RangedReposition.h"
#include "AISettings_RangedBehavior_Set.generated.h"

USTRUCT(BlueprintType)
struct FAISettings_RangedBehavior_Set {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISettings_CoverOptions Cover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISettings_RangedOptions NonCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISettings_RangedReposition Repositions;
    
public:
    ARKANSAS_API FAISettings_RangedBehavior_Set();
};

