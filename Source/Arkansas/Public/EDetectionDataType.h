#pragma once
#include "CoreMinimal.h"
#include "EDetectionDataType.generated.h"

UENUM(BlueprintType)
enum class EDetectionDataType : uint8 {
    Unknown,
    SoundData,
    DamageData,
    Count,
};

