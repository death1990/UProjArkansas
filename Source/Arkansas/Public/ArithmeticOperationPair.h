#pragma once
#include "CoreMinimal.h"
#include "EArithmeticOperation.h"
#include "ArithmeticOperationPair.generated.h"

USTRUCT(BlueprintType)
struct FArithmeticOperationPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EArithmeticOperation Operation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    ARKANSAS_API FArithmeticOperationPair();
};

