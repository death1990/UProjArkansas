#pragma once
#include "CoreMinimal.h"
#include "ECompanionCommandEventType.generated.h"

UENUM(BlueprintType)
enum class ECompanionCommandEventType : uint8 {
    Issued,
    Ended,
    Ended_SuccessOnly,
    Ended_FailOnly,
};

