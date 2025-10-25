#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "WeightedAmbientState.h"
#include "AmbientStateCycle.generated.h"

class UAkStateValue;

USTRUCT(BlueprintType)
struct OEIMUSIC_API FAmbientStateCycle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval DelaySeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkStateValue*> AmbientMusicStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedAmbientState> WeightedAmbientMusicStates;
    
    FAmbientStateCycle();
};

