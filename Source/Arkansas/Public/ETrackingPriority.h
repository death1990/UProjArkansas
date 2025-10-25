#pragma once
#include "CoreMinimal.h"
#include "ETrackingPriority.generated.h"

UENUM(BlueprintType)
enum ETrackingPriority {
    TP_Default,
    TP_PersonalSpace,
    TP_Moving,
    TP_Orientation,
    TP_Scripted,
    TP_Behavior,
    TP_Conversation,
    TP_ConversationPersistent,
    TP_Reaction,
    TP_Debug,
    TP_Count,
};

