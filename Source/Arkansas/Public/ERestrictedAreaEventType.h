#pragma once
#include "CoreMinimal.h"
#include "ERestrictedAreaEventType.generated.h"

UENUM(BlueprintType)
enum class ERestrictedAreaEventType : uint8 {
    Enter,
    Exit,
};

