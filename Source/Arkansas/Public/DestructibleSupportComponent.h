#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DestructibleSupportComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDestructibleSupportComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UDestructibleSupportComponent(const FObjectInitializer& ObjectInitializer);

};

