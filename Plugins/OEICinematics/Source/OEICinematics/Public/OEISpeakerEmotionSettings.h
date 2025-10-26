#pragma once
#include "CoreMinimal.h"
#include <GameplayTagContainer.h>
#include "OEISpeakerEmotionSettings.generated.h"

USTRUCT(BlueprintType)
struct OEICINEMATICS_API FOEISpeakerEmotionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DefaultEmotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultEmotionStrength;
    
    FOEISpeakerEmotionSettings();
};

