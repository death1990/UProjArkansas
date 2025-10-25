#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "AutoStasisTriggerComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAutoStasisTriggerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UAutoStasisTriggerComponent(const FObjectInitializer& ObjectInitializer);

};

