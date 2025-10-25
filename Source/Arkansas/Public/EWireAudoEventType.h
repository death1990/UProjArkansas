#pragma once
#include "CoreMinimal.h"
#include "EWireAudoEventType.generated.h"

UENUM(BlueprintType)
enum class EWireAudoEventType : uint8 {
    Invalid,
    On,
    Off,
};

