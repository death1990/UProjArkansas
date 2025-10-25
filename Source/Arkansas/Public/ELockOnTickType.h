#pragma once
#include "CoreMinimal.h"
#include "ELockOnTickType.generated.h"

UENUM(BlueprintType)
enum class ELockOnTickType : uint8 {
    Idle,
    ADS,
    Active,
};

