#pragma once
#include "CoreMinimal.h"
#include "EFrameGenerationMethod.generated.h"

UENUM(BlueprintType)
enum class EFrameGenerationMethod : uint8 {
    None,
    DLSSG,
    XeFG,
};

