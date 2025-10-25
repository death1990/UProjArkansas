#pragma once
#include "CoreMinimal.h"
#include "ECombinedSettingType.generated.h"

UENUM(BlueprintType)
enum class ECombinedSettingType : uint8 {
    Default,
    SubsystemAsset,
    SpecialButton,
};

