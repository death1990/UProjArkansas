#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "DefensiveActionProbability.h"
#include "GrenadeDefensiveActionProbability.generated.h"

USTRUCT(BlueprintType)
struct FGrenadeDefensiveActionProbability : public FDefensiveActionProbability {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange ReactionTime;
    
public:
    ARKANSAS_API FGrenadeDefensiveActionProbability();
};

