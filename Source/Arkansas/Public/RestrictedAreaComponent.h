#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "RestrictedAreaComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URestrictedAreaComponent : public USceneComponent {
    GENERATED_BODY()
public:
    URestrictedAreaComponent(const FObjectInitializer& ObjectInitializer);

};

