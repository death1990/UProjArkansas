#pragma once
#include "CoreMinimal.h"
#include "EGameDifficulty.h"
#include "DifficultyChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDifficultyChanged, EGameDifficulty, NewDifficulty);

