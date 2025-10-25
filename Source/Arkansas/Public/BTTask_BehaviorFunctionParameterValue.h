#pragma once
#include "CoreMinimal.h"
#include "BTTask_BehaviorFunctionParameterValue.generated.h"

USTRUCT(BlueprintType)
struct FBTTask_BehaviorFunctionParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsDefaultValue: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Value;
    
    ARKANSAS_API FBTTask_BehaviorFunctionParameterValue();
};

