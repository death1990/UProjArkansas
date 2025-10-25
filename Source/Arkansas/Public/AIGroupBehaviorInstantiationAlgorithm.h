#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AIGroupBehaviorInstantiationAlgorithm.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct ARKANSAS_API FAIGroupBehaviorInstantiationAlgorithm {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> SpecifiedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpecifiedLocation;
    
    FAIGroupBehaviorInstantiationAlgorithm();
};

