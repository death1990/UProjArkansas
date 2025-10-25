#pragma once
#include "CoreMinimal.h"
#include "EQuestObjectiveStatus.generated.h"

UENUM(BlueprintType)
enum class EQuestObjectiveStatus : uint8 {
    Active,
    Completed,
    Visited,
    Failed,
    Irrelevant,
    Unsuccessful,
    Invalid,
};

