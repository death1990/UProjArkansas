#pragma once
#include "CoreMinimal.h"
#include "SpecialStopBehavior.generated.h"

USTRUCT(BlueprintType)
struct FSpecialStopBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyTriggerIfStopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDontStopMontageIfStopEvent;
    
    ARKANSAS_API FSpecialStopBehavior();
};

