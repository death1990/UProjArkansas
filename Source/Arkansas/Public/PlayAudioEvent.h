#pragma once
#include "CoreMinimal.h"
#include "InteractionScriptEvent.h"
#include "PlayAudioEvent.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UPlayAudioEvent : public UInteractionScriptEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Event;
    
    UPlayAudioEvent();

};

