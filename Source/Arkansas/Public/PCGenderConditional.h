#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=EOEIGender -FallbackName=EOEIGender
#include "EEqualityComparison.h"
#include "PCGenderConditional.generated.h"

USTRUCT(BlueprintType)
struct FPCGenderConditional {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEqualityComparison Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOEIGender ComparisonGender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefault;
    
    ARKANSAS_API FPCGenderConditional();
};

