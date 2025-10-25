#pragma once
#include "CoreMinimal.h"
#include "AIBehaviorBaseComponent.h"
#include "AIOrientationControl.h"
#include "EAlertState.h"
#include "AIOutOfCombatLogicComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAIOutOfCombatLogicComponent : public UAIBehaviorBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuspiciousPlayerActionInterruptTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuspiciousPlayerActionInterruptRepeatingChatterIntervalMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuspiciousPlayerActionInterruptRepeatingChatterIntervalMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuspiciousPlayerActionInterruptCrouchingSeenTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuspiciousPlayerActionInterruptFriendlyFineAimSeenTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetSharingDelay;
    
public:
    UAIOutOfCombatLogicComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnAlertStateChange(AActor* TargetActor, EAlertState OldAlertState, EAlertState NewAlertState, bool bRestoring);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetSharingDelay() const;
    
private:
    UFUNCTION(BlueprintCallable)
    FAIOrientationControl GetSuspiciousPlayerActionInterruptOrientationControl();
    
};

