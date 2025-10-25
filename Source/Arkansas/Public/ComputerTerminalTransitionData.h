#pragma once
#include "CoreMinimal.h"
#include "ComputerTerminalTransitionData.generated.h"

USTRUCT(BlueprintType)
struct FComputerTerminalTransitionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionExponent;
    
    ARKANSAS_API FComputerTerminalTransitionData();
};

