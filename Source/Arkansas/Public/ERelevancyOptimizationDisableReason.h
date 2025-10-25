#pragma once
#include "CoreMinimal.h"
#include "ERelevancyOptimizationDisableReason.generated.h"

UENUM(BlueprintType)
enum class ERelevancyOptimizationDisableReason : uint8 {
    None,
    NeedMeshTransformUpdate,
    DisabledByBehavior,
    IsCompanion,
    IsInCombat,
    IsDetecting,
    IsDying,
    IsInAnyPlayerConversation,
    IsPlayingRootMotion,
    IsEnteringAnimProxy,
    IsExitingAnimProxy,
    DisabledByLocomotion,
    IsRagdolling,
    IsTethering,
    IsClimbing,
    HasNoOwningController,
    IsDisabled,
};

