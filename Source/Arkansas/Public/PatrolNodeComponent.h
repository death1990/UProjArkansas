#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PatrolNodeComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPatrolNodeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPatrolNodeComponent(const FObjectInitializer& ObjectInitializer);

};

