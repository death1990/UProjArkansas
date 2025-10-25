#pragma once
#include "CoreMinimal.h"
#include "LocomotionState.h"
#include "LocomotionState_TurnInPlace.generated.h"

class UAnimSequenceBase;
class UHeadAndBodyTrackingComponent;
class ULocomotionAnimationData;

USTRUCT(BlueprintType)
struct FLocomotionState_TurnInPlace : public FLocomotionState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* PlayingAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHeadAndBodyTrackingComponent* HeadAndBodyTrackingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULocomotionAnimationData* CurrentLocomotionData;
    
public:
    ARKANSAS_API FLocomotionState_TurnInPlace();
};

