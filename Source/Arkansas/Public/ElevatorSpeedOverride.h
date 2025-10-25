#pragma once
#include "CoreMinimal.h"
#include "LogicalExpression.h"
#include "ElevatorSpeedOverride.generated.h"

USTRUCT(BlueprintType)
struct FElevatorSpeedOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLogicalExpression Conditional;
    
    ARKANSAS_API FElevatorSpeedOverride();
};

