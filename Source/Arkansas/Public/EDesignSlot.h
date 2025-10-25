#pragma once
#include "CoreMinimal.h"
#include "EDesignSlot.generated.h"

UENUM(BlueprintType)
enum class EDesignSlot : uint8 {
    Invalid,
    FrontSight,
    BackSight,
    BackStock,
};

