#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CategoryToAudioEvent.h"
#include "AnimationGameplayTagAudio.generated.h"

UCLASS(Abstract, Blueprintable)
class ARKANSAS_API UAnimationGameplayTagAudio : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCategoryToAudioEvent> CategoryEvents;
    
public:
    UAnimationGameplayTagAudio();

};

