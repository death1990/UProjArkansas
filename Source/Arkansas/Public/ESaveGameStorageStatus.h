#pragma once
#include "CoreMinimal.h"
#include "ESaveGameStorageStatus.generated.h"

UENUM(BlueprintType)
enum class ESaveGameStorageStatus : uint8 {
    Available,
    Unavailable,
};

