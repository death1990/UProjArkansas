#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
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

