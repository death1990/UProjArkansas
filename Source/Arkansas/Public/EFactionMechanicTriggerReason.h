#pragma once
#include "CoreMinimal.h"
#include "EFactionMechanicTriggerReason.generated.h"

UENUM(BlueprintType)
enum class EFactionMechanicTriggerReason : uint8 {
    OATotem,
    ArmorDestroyed,
    ACDrugDestroyed,
};

