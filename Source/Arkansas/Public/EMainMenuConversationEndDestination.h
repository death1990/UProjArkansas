#pragma once
#include "CoreMinimal.h"
#include "EMainMenuConversationEndDestination.generated.h"

UENUM(BlueprintType)
enum class EMainMenuConversationEndDestination : uint8 {
    None,
    NewGame,
    Continue,
    LoadGame,
    Settings,
    Deliverables,
    Extras,
    ExitGame,
};

