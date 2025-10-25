#pragma once
#include "CoreMinimal.h"
#include "EComputerTerminalResult.generated.h"

UENUM(BlueprintType)
enum class EComputerTerminalResult : uint8 {
    Success,
    Failed_Locked,
    Failed_Locked_Permanent,
    Failed_Locked_Key_NoHack,
    Failed_Locked_ComputerNoKey_HackResource,
    Failed_Locked_Key_HackResource,
    Failed_Locked_Hack_SkillInsufficient,
    Failed_Locked_Error,
    Pending_Hacking,
};

