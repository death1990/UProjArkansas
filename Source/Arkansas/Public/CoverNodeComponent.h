#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CoverNodeComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCoverNodeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UCoverNodeComponent(const FObjectInitializer& ObjectInitializer);

};

