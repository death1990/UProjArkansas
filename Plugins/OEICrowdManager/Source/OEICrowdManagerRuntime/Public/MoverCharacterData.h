#pragma once
#include "CoreMinimal.h"
#include "EOEIMoverState.h"
#include "MoverCharacterData.generated.h"

class AAIController;
class AOEIPassiveAnimProxy;
class UAnimationProxyData;

USTRUCT(BlueprintType)
struct FMoverCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EOEIMoverState MoverState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<EOEIMoverState> MoverStateStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIController* AIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimationProxyData* DestinationAnimationProxyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AOEIPassiveAnimProxy> DestinationAnimProxy;
    
    OEICROWDMANAGERRUNTIME_API FMoverCharacterData();
};

