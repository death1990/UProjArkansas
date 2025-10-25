#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "StageMarkComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OEICINEMATICS_API UStageMarkComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UStageMarkComponent(const FObjectInitializer& ObjectInitializer);

};

