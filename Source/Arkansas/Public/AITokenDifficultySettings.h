#pragma once
#include "CoreMinimal.h"
#include "AITokenDifficultySetting.h"
#include "AITokenDifficultySettings.generated.h"

USTRUCT(BlueprintType)
struct FAITokenDifficultySettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAITokenDifficultySetting TokenSettings[3];
    
    ARKANSAS_API FAITokenDifficultySettings();
};

