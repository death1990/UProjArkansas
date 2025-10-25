#pragma once
#include "CoreMinimal.h"
#include "WeightedAmbientState.generated.h"

class UAkStateValue;

USTRUCT(BlueprintType)
struct OEIMUSIC_API FWeightedAmbientState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* AmbientState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    FWeightedAmbientState();
};

