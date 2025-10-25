#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "OEIWeightedGestureCollection.h"
#include "OEIGestureEmotionBindingGroup.generated.h"

USTRUCT(BlueprintType)
struct OEICINEMATICS_API FOEIGestureEmotionBindingGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Emotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOEIWeightedGestureCollection Collection;
    
    FOEIGestureEmotionBindingGroup();
};

