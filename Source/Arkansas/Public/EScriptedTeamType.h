#pragma once
#include "CoreMinimal.h"
#include "EScriptedTeamType.generated.h"

UENUM(BlueprintType)
enum class EScriptedTeamType : uint8 {
    AIGroupBehavior,
    Script,
    MindControl,
};

