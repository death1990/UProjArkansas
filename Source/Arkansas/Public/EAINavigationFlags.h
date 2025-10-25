#pragma once
#include "CoreMinimal.h"
#include "EAINavigationFlags.generated.h"

UENUM(BlueprintType)
enum class EAINavigationFlags : uint8 {
    AvoidTargetFront,
    PreferCoverAreas,
    AvoidTargetProximity,
    MoveThroughDestructibles,
    IsBurrowing,
    BlockedByClosedDoors,
    IgnoreHazards,
    IgnoreNavLinks,
    IsOcclusionCheck,
    MoveThroughTraps,
    MoveThroughConversationStages,
    AvoidPlayerFront,
    IsSpawning,
    UNUSED_13,
    AvoidDropDownNavLinks,
    AvoidMantleNavLinks,
    AvoidVaultNavLinks,
    AvoidJumpNavLinks,
    AvoidLadders,
    PreferDropDownNavLinks,
    PreferMantleNavLinks,
    PreferVaultNavLinks,
    PreferJumpNavLinks,
    PreferLadders,
    MoveThroughObstacles,
    Count,
};

