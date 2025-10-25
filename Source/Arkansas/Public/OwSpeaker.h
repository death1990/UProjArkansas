#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIVoiceOver -ObjectName=OEIVoiceOverActor -FallbackName=OEIVoiceOverActor
#include "OwSpeaker.generated.h"

UINTERFACE()
class UOwSpeaker : public UOEIVoiceOverActor {
    GENERATED_BODY()
};

class IOwSpeaker : public IOEIVoiceOverActor {
    GENERATED_BODY()
public:
};

