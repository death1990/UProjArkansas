#pragma once
#include "CoreMinimal.h"
#include "PlayFxState.h"
#include "PlayFxPair.generated.h"

class UPlayFxEventEffect;

USTRUCT(BlueprintType)
struct FPlayFxPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPlayFxEventEffect> EventEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayFxState State;
    
    ARKANSAS_API FPlayFxPair();
};

