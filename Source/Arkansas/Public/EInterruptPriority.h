#pragma once
#include "CoreMinimal.h"
#include "EInterruptPriority.generated.h"

UENUM(BlueprintType)
enum class EInterruptPriority : uint8 {
    FullBodyTransitions = 80,
    Default = 128,
    AnimProxyInUse = 135,
    SuspiciousPlayerActionReactions = 145,
    HPRegionReactions = 165,
    CrimeReactions = 175,
    GrenadeAvoidance = 185,
    DisableStatusEffects = 195,
    FullBodyHitImpacts = 205,
    Ragdoll = 207,
    ConversationInterrupt = 210,
    ConversationParticipant = 215,
    NavLinkTraversal = 220,
    Reviving = 240,
    SequencerControl = 245,
    Cinematics = 250,
    Forced = 255,
    Undefined = 0,
};

