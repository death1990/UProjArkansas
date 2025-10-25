#pragma once
#include "CoreMinimal.h"
#include "ELedgerMapType.generated.h"

UENUM(BlueprintType)
enum class ELedgerMapType : uint8 {
    Local,
    Region,
    System,
    Count,
};

