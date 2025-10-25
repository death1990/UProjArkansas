#pragma once
#include "CoreMinimal.h"
#include "NewPlayFxState.h"
#include "NewPlayFxPair.generated.h"

class UNewPlayFxEventEffect;

USTRUCT(BlueprintType)
struct FNewPlayFxPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UNewPlayFxEventEffect> EventEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNewPlayFxState State;
    
    ARKANSAS_API FNewPlayFxPair();
};

