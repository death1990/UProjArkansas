#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "DelayedTeleportSubsystem.generated.h"

UCLASS(Blueprintable)
class UDelayedTeleportSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UDelayedTeleportSubsystem();

};

