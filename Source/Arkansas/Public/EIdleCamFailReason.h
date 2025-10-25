#pragma once
#include "CoreMinimal.h"
#include "EIdleCamFailReason.generated.h"

UENUM(BlueprintType)
enum class EIdleCamFailReason : uint8 {
    Invalid,
    PlayerInputDetected,
    PlayerInCombat,
    PlayerInConversation,
    PlayerIsReloading,
    PlayerIsAiming,
    PlayerIsMoving,
    PlayerIsCrouching,
    PlayerIsTakingSurvivalDamage,
    PlayerHasHostileStatusEffects,
    PlayerIsNotHealthy,
    AnimProxyPlaying,
    Success,
};

