#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "SampleOEITickManagedComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OEITICKMANAGER_API USampleOEITickManagedComponent : public USceneComponent {
    GENERATED_BODY()
public:
    USampleOEITickManagedComponent(const FObjectInitializer& ObjectInitializer);

};

