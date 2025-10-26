#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include <GameplayTagContainer.h>
#include "OEIGestureEmotionBindingGroup.h"
#include "OEIGestureEmotionBindingSettings.generated.h"

UCLASS(Blueprintable)
class OEICINEMATICS_API UOEIGestureEmotionBindingSettings : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DefaultEmotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOEIGestureEmotionBindingGroup> BindingGroups;
    
public:
    UOEIGestureEmotionBindingSettings();

};

