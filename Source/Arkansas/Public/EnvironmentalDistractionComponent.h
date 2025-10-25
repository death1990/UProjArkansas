#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EnvironmentalDistractionComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEnvironmentalDistractionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UEnvironmentalDistractionComponent(const FObjectInitializer& ObjectInitializer);

};

