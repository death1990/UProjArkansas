#pragma once
#include "CoreMinimal.h"
#include "OEIWwiseAudioState.generated.h"

class UAkStateValue;

USTRUCT(BlueprintType)
struct FOEIWwiseAudioState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* StateValueObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateValue;
    
    OEIWWISE_API FOEIWwiseAudioState();
};

