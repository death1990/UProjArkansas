#include "AIBehaviorFunctionLibrary_Animation.h"
#include "AIAnimationMonitor.h"

UAIBehaviorFunctionLibrary_Animation::UAIBehaviorFunctionLibrary_Animation() {
    this->AIAnimationMonitor = CreateDefaultSubobject<UAIAnimationMonitor>(TEXT("AIAnimationMonitor"));
}

EAIBehaviorFunctionResult UAIBehaviorFunctionLibrary_Animation::WaitForLocomotionIdle(const FAIBehaviorFunctionContext& Context) {
    return EAIBehaviorFunctionResult::Success;
}

EAIBehaviorFunctionResult UAIBehaviorFunctionLibrary_Animation::PlayAnimationMontageWithMotionWarpingAsInterrupt(const FAIBehaviorFunctionContext& Context, UAnimMontage* MontageToPlay, const TArray<FTransform> SyncTransforms, EInterruptPriority Priority, EInterruptPriorityBehavior PriorityBehavior, const FString& FromWhere, bool bDeactivateWhenDeprioritized, bool bImmobilizeMovement, bool bPauseBehaviorTask, bool bPauseBehaviorTree, bool bAllowGroupBehaviorParticipation, bool bAllowWeaponFire) {
    return EAIBehaviorFunctionResult::Success;
}

EAIBehaviorFunctionResult UAIBehaviorFunctionLibrary_Animation::PlayAnimationMontageWithMotionWarping(const FAIBehaviorFunctionContext& Context, UAnimMontage* MontageToPlay, const TArray<FTransform> SyncTransforms) {
    return EAIBehaviorFunctionResult::Success;
}

EAIBehaviorFunctionResult UAIBehaviorFunctionLibrary_Animation::PlayAnimationMontageAsInterrupt(const FAIBehaviorFunctionContext& Context, UAnimMontage* MontageToPlay, EInterruptPriority Priority, EInterruptPriorityBehavior PriorityBehavior, const FString& FromWhere, bool bDeactivateWhenDeprioritized, bool bImmobilizeMovement, bool bPauseBehaviorTask, bool bPauseBehaviorTree, bool bAllowGroupBehaviorParticipation, bool bAllowWeaponFire) {
    return EAIBehaviorFunctionResult::Success;
}

EAIBehaviorFunctionResult UAIBehaviorFunctionLibrary_Animation::PlayAnimationMontage(const FAIBehaviorFunctionContext& Context, UAnimMontage* MontageToPlay) {
    return EAIBehaviorFunctionResult::Success;
}


