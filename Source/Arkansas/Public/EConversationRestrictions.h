#pragma once
#include "CoreMinimal.h"
#include "EConversationRestrictions.generated.h"

UENUM()
enum class EConversationRestrictions {
    None,
    Combat,
    HostileSE,
    Crime = 4,
    All = 4294967295,
};

