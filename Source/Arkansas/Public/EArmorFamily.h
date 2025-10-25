#pragma once
#include "CoreMinimal.h"
#include "EArmorFamily.generated.h"

UENUM(BlueprintType)
enum class EArmorFamily : uint8 {
    All,
    Light,
    Medium,
    Heavy,
};

