#pragma once
#include "CoreMinimal.h"
#include "ESearchRequestProcessedResponse.generated.h"

UENUM(BlueprintType)
enum class ESearchRequestProcessedResponse : uint8 {
    Interrupt,
    Queue,
    Count,
};

