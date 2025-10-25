#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LocalPlayerSubsystem -FallbackName=LocalPlayerSubsystem
#include "OEILocalPlayerSplineEmitterSubsystem.generated.h"

UCLASS(Blueprintable)
class OEISPLINEEMITTER_API UOEILocalPlayerSplineEmitterSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UOEILocalPlayerSplineEmitterSubsystem();

};

