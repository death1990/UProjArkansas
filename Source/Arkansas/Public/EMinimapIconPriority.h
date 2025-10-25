#pragma once
#include "CoreMinimal.h"
#include "EMinimapIconPriority.generated.h"

UENUM(BlueprintType)
enum class EMinimapIconPriority : uint8 {
    INVALID,
    Companion,
    NeutralNPC,
    DeadLootableNPC,
    DeadCompanion,
    Hostile,
    HostileCluster,
    PointOfInterest,
    QuestBeacon,
    CustomWaypoint,
    TrapTrigger,
    Undefined,
};

