#pragma once
#include "CoreMinimal.h"
#include "EXPGainReason.generated.h"

UENUM(BlueprintType)
enum class EXPGainReason : uint8 {
    EnemyKilled,
    QuestCompleted,
    QuestObjectiveCompleted,
    DiscoveredPointOfInterest,
    HackTerminal,
    LockPick,
    Conversation,
    FoundCollectible,
    Debug,
    DiscoveredTravelDestination,
    Interaction,
    AutomechDisabled,
    CreatureTamed,
    BitsToXP,
};

