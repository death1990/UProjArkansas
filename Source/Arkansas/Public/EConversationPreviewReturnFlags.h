#pragma once
#include "CoreMinimal.h"
#include "EConversationPreviewReturnFlags.generated.h"

UENUM(BlueprintType)
enum class EConversationPreviewReturnFlags : uint8 {
    None,
    Nodes,
    Actors,
};

