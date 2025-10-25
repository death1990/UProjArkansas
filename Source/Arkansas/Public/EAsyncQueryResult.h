#pragma once
#include "CoreMinimal.h"
#include "EAsyncQueryResult.generated.h"

UENUM(BlueprintType)
enum class EAsyncQueryResult : uint8 {
    Invalid,
    Pending,
    Success,
    Failure,
};

