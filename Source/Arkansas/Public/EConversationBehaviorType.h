#pragma once
#include "CoreMinimal.h"
#include "EConversationBehaviorType.generated.h"

UENUM(BlueprintType)
enum class EConversationBehaviorType : uint8 {
    Default,
    Earpiece,
    AudioLog,
    RadioWorld,
    RadioLoudspeaker,
    Slideshow,
};

