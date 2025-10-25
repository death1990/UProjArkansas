#pragma once
#include "CoreMinimal.h"
#include "EConversationPreviewEnsureFlags.generated.h"

UENUM()
enum class EConversationPreviewEnsureFlags {
    None,
    ActorSpeakers,
    TalkNode,
    PlayerResponse = 4,
    PassesConditionals = 8,
    PassesPersistance = 16,
    NodeUnvisited = 32,
    NodeUnseen = 64,
    NodeUnknown = 128,
    HasVO = 256,
};

