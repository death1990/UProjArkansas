#pragma once
#include "CoreMinimal.h"
#include "EQuestSortingOptions.generated.h"

UENUM(BlueprintType)
enum class EQuestSortingOptions : uint8 {
    QuestType,
    Location,
    Newest,
    Alphabetical,
};

