#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AIGroupBehaviorAlgorithmSelector.generated.h"

class UAIGroupBehavior;

USTRUCT(BlueprintType)
struct FAIGroupBehaviorAlgorithmSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAIGroupBehavior> AIGroupBehaviorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AlgorithmName;
    
    ARKANSAS_API FAIGroupBehaviorAlgorithmSelector();
};

