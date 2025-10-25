#pragma once
#include "CoreMinimal.h"
#include "EPersonalSpaceZone.generated.h"

UENUM(BlueprintType)
enum class EPersonalSpaceZone : uint8 {
    None,
    Acknowledgement,
    Interaction,
    Violation,
};

