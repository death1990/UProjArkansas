#pragma once
#include "CoreMinimal.h"
#include "EConversationPreviewStopFlags.generated.h"

UENUM(BlueprintType)
enum class EConversationPreviewStopFlags : uint8 {
    None,
    AfterNodeUnseen,
    AfterNodeUnvisited,
    AfterNodeUnknown = 4,
    AfterImmediateChildren = 8,
    AfterFirstValid = 16,
    AfterPlayerResponses = 32,
    BeforePlayerResponse = 64,
};

