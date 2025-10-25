#pragma once
#include "CoreMinimal.h"
#include "LocomotionState.h"
#include "LocomotionState_WalkStop.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FLocomotionState_WalkStop : public FLocomotionState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* PlayingAnimation;
    
public:
    ARKANSAS_API FLocomotionState_WalkStop();
};

