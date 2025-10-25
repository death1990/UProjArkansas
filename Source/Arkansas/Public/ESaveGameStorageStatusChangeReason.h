#pragma once
#include "CoreMinimal.h"
#include "ESaveGameStorageStatusChangeReason.generated.h"

UENUM(BlueprintType)
enum class ESaveGameStorageStatusChangeReason : uint8 {
    UserAvailabilityChanged,
    Unknown,
};

