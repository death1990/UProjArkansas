#pragma once
#include "CoreMinimal.h"
#include "AchievementArray.generated.h"

class UAchievementDataAsset;

USTRUCT(BlueprintType)
struct FAchievementArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAchievementDataAsset*> Achievements;
    
    ARKANSAS_API FAchievementArray();
};

