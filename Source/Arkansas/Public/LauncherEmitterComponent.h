#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "LauncherEmitterComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULauncherEmitterComponent : public USceneComponent {
    GENERATED_BODY()
public:
    ULauncherEmitterComponent(const FObjectInitializer& ObjectInitializer);

};

