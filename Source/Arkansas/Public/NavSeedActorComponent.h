#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "NavSeedActorComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNavSeedActorComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UNavSeedActorComponent(const FObjectInitializer& ObjectInitializer);

};

