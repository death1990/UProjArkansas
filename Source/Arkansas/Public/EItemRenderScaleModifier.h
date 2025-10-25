#pragma once
#include "CoreMinimal.h"
#include "EItemRenderScaleModifier.generated.h"

UENUM(BlueprintType)
enum class EItemRenderScaleModifier : uint8 {
    ShrinkGreatly,
    ShrinkModerately,
    ShrinkSlightly,
    NoChange,
    GrowSlightly,
    GrowModerately,
    GrowGreatly,
};

