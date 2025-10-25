#pragma once
#include "CoreMinimal.h"
#include "EOWDLSSFrameGenerationMode.generated.h"

UENUM(BlueprintType)
enum class EOWDLSSFrameGenerationMode : uint8 {
    Off,
    Auto,
    On2X,
    On3X,
    On4X,
};

