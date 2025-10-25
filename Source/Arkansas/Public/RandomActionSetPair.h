#pragma once
#include "CoreMinimal.h"
#include "RandomActionSetPair.generated.h"

class UAIAction;

USTRUCT(BlueprintType)
struct FRandomActionSetPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIAction* Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Score;
    
    ARKANSAS_API FRandomActionSetPair();
};

