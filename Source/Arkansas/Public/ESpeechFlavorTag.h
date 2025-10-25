#pragma once
#include "CoreMinimal.h"
#include "ESpeechFlavorTag.generated.h"

UENUM(BlueprintType)
enum class ESpeechFlavorTag : uint8 {
    Speech,
    Bargain,
    Bluff,
    Browbeat,
    Charm,
    Compromise,
    Confuse,
    Debate,
    Demoralize,
    Empathize,
    Encourage,
    Flirt,
    Frighten,
    Lie,
    Misdirect,
    Mock,
    Persuade,
    Provoke,
    Reason,
    Soothe,
    Threaten,
    Count,
    Invalid,
};

