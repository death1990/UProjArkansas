#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "SpeakerRegistry.generated.h"

UCLASS(Blueprintable)
class OEIFLOWCHARTS_API USpeakerRegistry : public UWorldSubsystem {
    GENERATED_BODY()
public:
    USpeakerRegistry();

};

