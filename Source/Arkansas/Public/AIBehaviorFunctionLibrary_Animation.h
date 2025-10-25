#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "AIBehaviorFunctionContext.h"
#include "AIBehaviorFunctionLibrary.h"
#include "EAIBehaviorFunctionResult.h"
#include "EInterruptPriority.h"
#include "EInterruptPriorityBehavior.h"
#include "AIBehaviorFunctionLibrary_Animation.generated.h"

class UAIAnimationMonitor;
class UAnimMontage;

UCLASS(Blueprintable)
class UAIBehaviorFunctionLibrary_Animation : public UAIBehaviorFunctionLibrary {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIAnimationMonitor* AIAnimationMonitor;
    
public:
    UAIBehaviorFunctionLibrary_Animation();

    UFUNCTION(BlueprintCallable)
    static EAIBehaviorFunctionResult WaitForLocomotionIdle(const FAIBehaviorFunctionContext& Context);
    
    UFUNCTION(BlueprintCallable)
    static EAIBehaviorFunctionResult PlayAnimationMontageWithMotionWarpingAsInterrupt(const FAIBehaviorFunctionContext& Context, UAnimMontage* MontageToPlay, const TArray<FTransform> SyncTransforms, EInterruptPriority Priority, EInterruptPriorityBehavior PriorityBehavior, const FString& FromWhere, bool bDeactivateWhenDeprioritized, bool bImmobilizeMovement, bool bPauseBehaviorTask, bool bPauseBehaviorTree, bool bAllowGroupBehaviorParticipation, bool bAllowWeaponFire);
    
    UFUNCTION(BlueprintCallable)
    static EAIBehaviorFunctionResult PlayAnimationMontageWithMotionWarping(const FAIBehaviorFunctionContext& Context, UAnimMontage* MontageToPlay, const TArray<FTransform> SyncTransforms);
    
    UFUNCTION(BlueprintCallable)
    static EAIBehaviorFunctionResult PlayAnimationMontageAsInterrupt(const FAIBehaviorFunctionContext& Context, UAnimMontage* MontageToPlay, EInterruptPriority Priority, EInterruptPriorityBehavior PriorityBehavior, const FString& FromWhere, bool bDeactivateWhenDeprioritized, bool bImmobilizeMovement, bool bPauseBehaviorTask, bool bPauseBehaviorTree, bool bAllowGroupBehaviorParticipation, bool bAllowWeaponFire);
    
    UFUNCTION(BlueprintCallable)
    static EAIBehaviorFunctionResult PlayAnimationMontage(const FAIBehaviorFunctionContext& Context, UAnimMontage* MontageToPlay);
    
};

