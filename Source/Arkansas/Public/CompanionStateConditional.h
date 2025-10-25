#pragma once
#include "CoreMinimal.h"
#include "ECompanionState.h"
#include "EEqualityComparison.h"
#include "ESpecialObsidianID.h"
#include "CompanionStateConditional.generated.h"

USTRUCT(BlueprintType)
struct FCompanionStateConditional {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpecialObsidianID CompanionToCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEqualityComparison Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECompanionState ComparisonState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefault;
    
    ARKANSAS_API FCompanionStateConditional();
};

