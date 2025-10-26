#pragma once
#include "CoreMinimal.h"
#include <EComparisonOperator.h>
#include <GlobalVariableReference.h>
#include "AccomplishmentGlobal.generated.h"

USTRUCT(BlueprintType)
struct FAccomplishmentGlobal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalVariableReference GlobalVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComparisonOperator Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    OEIACHIEVEMENTS_API FAccomplishmentGlobal();
};

