#pragma once
#include "CoreMinimal.h"
#include "LocomotionState.h"
#include "LocomotionState_WalkStart.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FLocomotionState_WalkStart : public FLocomotionState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* PlayingAnimation;
    
public:
    ARKANSAS_API FLocomotionState_WalkStart();
};

