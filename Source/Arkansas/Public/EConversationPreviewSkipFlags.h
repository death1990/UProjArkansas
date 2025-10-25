#pragma once
#include "CoreMinimal.h"
#include "EConversationPreviewSkipFlags.generated.h"

UENUM(BlueprintType)
enum class EConversationPreviewSkipFlags : uint8 {
    None,
    RootNode,
    FirstNode,
    BankChildNodes = 4,
};

