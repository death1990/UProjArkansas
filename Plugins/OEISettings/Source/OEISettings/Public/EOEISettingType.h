#pragma once
#include "CoreMinimal.h"
#include "EOEISettingType.generated.h"

UENUM(BlueprintType)
enum class EOEISettingType : uint8 {
    None,
    Boolean,
    Integer,
    Float,
};

