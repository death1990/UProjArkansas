#pragma once
#include "CoreMinimal.h"
#include "EConditionalType.generated.h"

UENUM(BlueprintType)
enum class EConditionalType : uint8 {
    GlobalVar,
    QuestState,
    CompanionState,
    PCGender,
    DataAsset,
    KillOnSight,
    BlueprintFunctionLibrary,
    None,
    Count,
};

