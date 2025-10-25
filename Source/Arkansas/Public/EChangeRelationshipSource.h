#pragma once
#include "CoreMinimal.h"
#include "EChangeRelationshipSource.generated.h"

UENUM(BlueprintType)
enum class EChangeRelationshipSource : uint8 {
    CompanionCommand,
    CrimeActive,
    CrimeDetected,
    Default,
};

