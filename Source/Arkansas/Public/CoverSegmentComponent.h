#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CoverSegmentComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCoverSegmentComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UCoverSegmentComponent(const FObjectInitializer& ObjectInitializer);

};

