#pragma once
#include "CoreMinimal.h"
#include "EQuestStatus.generated.h"

UENUM(BlueprintType)
enum class EQuestStatus : uint8 {
    Active,
    Completed,
    Failed,
    Successful,
    Started,
    Mentioned,
    Count,
    Invalid,
};

