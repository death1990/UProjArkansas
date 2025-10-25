#pragma once
#include "CoreMinimal.h"
#include "ERPGInteractEventType.generated.h"

UENUM(BlueprintType)
enum class ERPGInteractEventType : uint8 {
    Invalid,
    Interacted,
};

