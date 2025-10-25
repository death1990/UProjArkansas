#pragma once
#include "CoreMinimal.h"
#include "EEncounterActivationType.generated.h"

UENUM()
enum class EEncounterActivationType : int32 {
    Proximity,
    Event,
};

