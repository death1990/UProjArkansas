#pragma once
#include "CoreMinimal.h"
#include "LocomotionAnimationState.h"
#include "LocomotionState_TurnInPlace.h"
#include "LocomotionState_WalkStart.h"
#include "LocomotionState_WalkStop.h"
#include "LocomotionController.generated.h"

class ACharacter;
class AIndianaCharacter;
class UHeadAndBodyTrackingComponent;
class UOwAnimInstance;

USTRUCT(BlueprintType)
struct FLocomotionController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWalkStartAdjustPlaySpeedInsteadOfDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIndianaCharacter* OWOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOwAnimInstance* OwnerAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHeadAndBodyTrackingComponent* OwnerHeadAndBodyTracking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocomotionAnimationState CurrentAnimState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocomotionState_TurnInPlace TurnInPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocomotionState_WalkStart WalkStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocomotionState_WalkStop WalkStop;
    
public:
    ARKANSAS_API FLocomotionController();
};

