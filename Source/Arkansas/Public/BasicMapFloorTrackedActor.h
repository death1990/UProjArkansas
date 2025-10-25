#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MapFloorTrackedActor.h"
#include "BasicMapFloorTrackedActor.generated.h"

UCLASS(Blueprintable)
class ABasicMapFloorTrackedActor : public AActor, public IMapFloorTrackedActor {
    GENERATED_BODY()
public:
    ABasicMapFloorTrackedActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

